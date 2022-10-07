#include<iostream>
using namespace std;

template <class T>

float functionAverage(T a , T b)
{
    return (a+b)/2.0;
}

template <class T>
void swapp(T &a , T &b)
{
    a= a+b;
    b= a-b;
    a = a-b;
}
int main()
{
    cout<<functionAverage(2,3)<<endl;
    int x=7, y=5;
    swapp(x,y);
    cout<<x<<" "<<y;
    return 0;
}