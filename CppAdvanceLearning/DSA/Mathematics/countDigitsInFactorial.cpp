#include<bits/stdc++.h>
using namespace std;
long long getFactorial(int n)
{
    if(n==0)
    return 1;
    return n*getFactorial(n-1);
}
int getDigitsCount(long long fact)
{
    return (floor(log10(fact)) +1);
}
int main()
{
    system("cls");
    int n=120;
    long long fact = getFactorial(n);
    cout<<fact<<endl;

    int digits = getDigitsCount(fact);
    cout<<digits;
    return 0;
}