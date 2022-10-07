#include<bits/stdc++.h>
using namespace std;
int* fib(int n)
{
    static int f[5+1];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++)
    f[i] = f[i-1]+ f[i-2];
    return f;
}
int main()
{
    system("cls");
    int n =5;
    int *ptr = fib(n);
    for (int  i = 0; i < n+1; i++)
    {
        cout<<ptr[i]<<" ";
    }
    
    return 0;
}