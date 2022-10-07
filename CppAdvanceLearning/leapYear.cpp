#include<bits/stdc++.h>
using namespace std;
void precise(float a , float b)
{
    float c = a/b;
    cout<<c<<setprecision(3)<<fixed<<"   "<<c;
}
int main()
{
    system("cls");
    float a = 5.43;
    float b = 2.653;
    precise(a,b);
    return 0;
}
