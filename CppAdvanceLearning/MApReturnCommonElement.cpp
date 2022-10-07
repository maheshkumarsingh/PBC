#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");

    vector<int> v1 = { 3,4,2,2,4};
    vector<int> v2= {3,2,2,7};

    map<int, int> mp1;

    for(auto x:v1)
    mp1[x]++;
    map<int, int> mp2;

    for(auto x:v2)
    mp2[x]++;

    for (auto itr= mp2.begin();itr!=mp2.end();itr++)
    {
        auto it = mp1.find(itr->first);
        if(it!=mp1.end())
        {
            while(it->second-- && itr->second--)
            {
                cout<<it->first<<" ";
            }
        }
    }

    cout<<endl;
    unordered_map<int, int> m;

    for(auto x:v1)
    m[x]++;

    for(auto x:m)
    cout<<x.first<<" "<<x.second<<endl;
    return 0;
}

