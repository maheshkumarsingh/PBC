#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> vec1 = { 927, 707, 374, 394, 279, 799, 878, 937, 431, 112 };
    vector<int> vec = {5,5,5,5,5};
    pair<int, int> p;
    p.first = p.second = INT_MIN;
    for(auto it : vec)
    {
        if(it > p.first)
        {
            p.second = p.first;
            p.first = it;
        }
        else if(it > p.second && p.first!= it)
        p.second = it;
    }
    if(p.second == INT_MIN)
    p.second = p.first;
    //cout<<p.first<<" "<<p.second<<endl;
    cout<< (p.second % p.first);
    return 0;
}