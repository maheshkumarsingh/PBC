#include<bits/stdc++.h>
using namespace std;
long long findFact(int n)
{
    if(n==0)
    return 1;

    return n * findFact(n-1);
}
int findTrailingZeroes(int n)
{
    long long fact = findFact(n);
    int zero =0;
    int rem =0;
    while(fact!=0)
    {
        if(fact%10==0)
        zero++;
        else
        break;
        fact/=10;
    }
    return zero;
}

int findTrainlingZeroesByEfficientMethod(int n)
{
    int ans=0;
    for (int i = 5; i <= n; i*=5)
    {
        ans+= n/i;
    }
    return ans;
    
}
int main()
{
    system("cls");
    int n;
    cin>>n;
    int ans = findTrailingZeroes(n);
    cout<<ans<<endl;
    ans = findTrainlingZeroesByEfficientMethod(n);
    cout<<ans<<endl;
    return 0;
}