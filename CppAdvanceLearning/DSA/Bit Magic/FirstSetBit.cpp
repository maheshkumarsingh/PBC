#include<bits/stdc++.h>
using namespace std;

unsigned int getFirstSetBit(int n)
{
    int count =0;
    while(n)
    {
        if((n & 1) == 1) return ++count;
        else count++;
        n = n >> 1;
    }
    return 0;
}

int main()
{
    system("cls");
    int n;
    cin>>n;
    unsigned int count = getFirstSetBit(n);
    cout<<count<<endl;
    return 0;
}