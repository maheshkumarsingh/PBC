#include<bits/stdc++.h>
using namespace std;

int findGCD(int a, int b)
{
    if(b==0)
    return a;
    
}
int main()
{
    system("cls");

    int a,b;
    cin>>a>>b;

    int ans = findGCD(a,b);
    cout<<ans<<endl;
    return 0;
}