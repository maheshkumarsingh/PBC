#include <bits/stdc++.h>
using namespace std;

int table[256];

void initialize()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];   // counting set bits from 1 to 256
    }
}
int countSetBits(int n)
{
    int res = 0;
    res = res + table[n & 0xFF];
    n = n>>8;
    res = res + table[n & 0xFF];
    n = n>>8;
    res = res + table[n & 0xFF];
    return res;
}
int main()
{
    system("cls");
    /*method 1 to count set bits O(total set bits)
    int n;
    cin>>n;
    int count =0;
    while(n)
    {
        if(n%2!=0)
        count++;
        n=n/2;
    }
    cout<<count<<endl;
    */
    /*method 2 count set bits O(total set bits)
     int n;
     cin>>n;
     int count =0;
     while(n)
     {
         if(n&1 == 1)    //count = count + (n & 1);
         count++;
         n=n>>1;
     }
     cout<<count<<endl;
     */
    /* method 3 Brian kerningams algos  O(set bit)
    when we substract 1 from any number we unset the rightmost bit so by this we are removing all set bits
    one by one and counting it
    int n;
    cin>>n;
    int count=0;
    while(n)
    {
        n = n & (n-1);    //3 & 2 011 & 010 = 010
        count ++;         // 2 & 1 010 & 001 = 000
    }
    cout<<count<<endl;  */

    /* table lookup method O(1) */
    int n;
    cin >> n;
    initialize();
    cout << countSetBits(n);
    return 0;
}