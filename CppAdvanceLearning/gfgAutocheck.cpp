#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> vec = {1,3,4,5};

    for(auto &x: vec)
    x=10;

    for(auto x:vec)
    cout<<x<<endl;
    return 0;
}