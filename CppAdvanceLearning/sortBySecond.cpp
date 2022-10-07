#include<bits/stdc++.h>
using namespace std;

bool myOwnComp(pair<int, int> p1 , pair<int, int> p2)
{
     if(p1.second == p2.second)
     return p1.first > p2.first;
}
vector<pair<int,int>> sortBySecond(vector<pair<int,int>> vec)
{
    sort(vec.begin(), vec.end(), myOwnComp);
    return vec;
}
int main()
{
    system("cls");
    vector<pair<int,int>> vec;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int age;
        int height;
        cin>>age>>height;
        vec.push_back({age,height});
    }

    vector<pair<int,int>> ans = sortBySecond(vec);
    for(auto x : ans)
    cout<<x.first<<"   "<<x.second<<endl;
    return 0;
}