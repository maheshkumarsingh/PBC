#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");

    int x=10;
    const int *ptr =&x;
    const int &ref = x;
    x =17;
    cout<<*ptr<<endl;
    cout<<ref<<endl;
    return 0;
}