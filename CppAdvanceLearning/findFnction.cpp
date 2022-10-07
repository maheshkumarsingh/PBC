#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");

    vector<int> vec = {10,20,30,40,50};
    auto it = vec.begin();
    it = find(vec.begin(),vec.end(),30);
    cout<<it-vec.begin()<<endl;

    return 0;
}