#include<bits/stdc++.h>
using namespace std;

void listOperation(list<int> &li)
{
    li.pop_front();
    li.insert(li.begin(),10);
}
int main()
{
    system("cls");
    list<int> li = {1,2,3,4,5};
    li.pop_back();
    for(auto x: li)
    cout<<x<<" ";
    cout<<endl;
    listOperation(li);
    for(auto x: li)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}