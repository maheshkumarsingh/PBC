#include<bits/stdc++.h>
using namespace std;
int bar(int x , int y)
{
    if(y ==0) return 0;
    return (x + bar(x , y-1));
}
int foo(int x , int y)
{
    if(y==0) return 1;
    return bar(x, foo(x, y-1));
}
int main()
{
    system("cls");
    cout<<foo(3,5);
    return 0;
}