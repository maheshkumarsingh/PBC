#include<bits/stdc++.h>
using namespace std;
int findInverseMod(int b, int m)
{
    for(int i=1;i<m;i++)
    if(((b * i) %m == 1))
    return i;
    return -1;
}
int main()
{
    system("cls");
    int b,m;
    cin>>b>>m;
    cout<<findInverseMod(b,m);
    return 0;
}