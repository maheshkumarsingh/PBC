#include <bits/stdc++.h>
using namespace std;
int largestPowerOf2(int n)
{
    int x = 0;
    while ((1 << x) <= n)
    {
        x++;
    }
    return x;
}
int countSetBits(int n)
{
    // Your logic here
    if(n == 0) return 0;
    int x = largestPowerOf2(n);
    int bitsTill2Powx = (1 << (x - 1)) * x;
    int msb2xTon = n - (1 << x) + 1;
    int rest = n - (1 << x);
    int ans =  bitsTill2Powx + msb2xTon + countSetBits(rest);
    return ans;
}
int main()
{
    system("cls");
    cout<< countSetBits(10)<<endl;
    return 0;
}