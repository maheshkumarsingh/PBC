#include<bits/stdc++.h>
using namespace std;

int safePosition(int n, int k)
{
    list<int> li;
    for (int i = 1; i <= n; i++)
        li.push_back(i);
    for(int &x: li)
    cout<<x<<" ";
    cout<<endl;
    auto it = li.begin();
    auto itr=li.begin();
    while(it!=li.end())
    {
        for(int i=1;i<k-1;i++)
        it++;
        itr = li.erase(it);
    }
    cout<<*(li.begin())<<endl;
}
int main()
{
    system("cls");
    int n,k;
    cin>>n>>k;
    cout<<safePosition(n,k);
    return 0;
}