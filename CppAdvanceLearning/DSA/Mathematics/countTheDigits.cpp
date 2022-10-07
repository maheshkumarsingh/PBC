#include<bits/stdc++.h>
using namespace std;
long long countDigits(long long num)
{
    long long count =0;
    while(num!=0)
    {
        num/=10;
        ++count;
    }
    return count;
}
long long countDigitsByRecurssion(long long num)
{
    if(num==0)
    return 0;
    return 1+ countDigitsByRecurssion(num/10);
}

long long countDigitsByLograthmic(long long num)
{
    return floor(log10(num))+1;
}
int main()
{
    system("cls");
    long long ans = countDigits(1254789648547512364);
    cout<<ans<<endl;
    ans = countDigitsByRecurssion(1254789648547512364);
    cout<<ans<<endl;
    ans = countDigitsByLograthmic(1254789648547512364);
    cout<<ans<<endl;

    return 0;
}