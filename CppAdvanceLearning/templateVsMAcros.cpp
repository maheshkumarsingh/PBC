#include<bits/stdc++.h>
using namespace std;
template <class T>
#define myMax2(x,y) ((x>y)?x:y);

T myMax1(T x, T y)
{
    return x>y?x:y;
}
int main()
{
    system("cls");
    cout<<myMax1<int>(3,7)<<endl;
    int myMax = myMax2(3,5);
    cout<<myMax<<endl;
    return 0;
}