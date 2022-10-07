#include<bits/stdc++.h>
using namespace std;
deque<int> dq;
void insertMin(int x)
{
    dq.push_front(x);
}
void insertMax(int x)
{
    dq.push_back(x);
}

void getMin()
{
    cout<<dq.front()<<endl;
}
void getMax()
{
    cout<<dq.back()<<endl;
}
int main()
{
    system("cls");
    int x;
    cin>>x;
    insertMin(x);
    cin>>x;
    insertMax(x);
    cin>>x;
    insertMin(x);
    cin>>x;
    insertMax(x);
    getMin();
    getMax();
    insertMin(x);
    getMin();
    insertMax(x);
    getMax();
    return 0;
}