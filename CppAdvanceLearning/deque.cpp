#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    deque<int> dq ={10,20,30,40};
    auto it = dq.begin();
    it++;
    cout<<*(it)<<endl;
    dq.insert(it,11);
    cout<<*(it)<<endl;
    int x = min({-1,2,3});
    cout<<x<<endl;
    return 0;
}