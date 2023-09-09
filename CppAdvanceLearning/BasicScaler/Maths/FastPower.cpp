#include<bits/stdc++.h>
using namespace std;

int normalSolution(int a, int b, int m)
{
    cout<<"Finding solution using normal method"<<endl;
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans *a;
    }
    cout<<ans<<endl;
    return ans%m;
}
int fastPowerSolution(int a, int b, int m)
{
    if(b ==0)
    return 1;
    if(b % 2 == 0)
    return fastPowerSolution(a * a%m, b/2,m);
    else return (a * fastPowerSolution(a * a%m, (b-1)/2, m))%m;
}
int main()
{
    system("cls");
    int a,b,m;
    cin>>a>>b>>m;
    cout<<a<<" raised to power "<<b<<" % "<<m<<" is: "<<normalSolution(a,b,m)<<endl;
    cout<<a<<" raised to power "<<b<<" % "<<m<<" is: "<<fastPowerSolution(a,b,m)<<endl;
    return 0;
}