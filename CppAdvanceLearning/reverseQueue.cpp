#include<bits/stdc++.h>
using namespace std;
queue<int> reverseQueue(queue<int> &que, int k)
{
    stack<int> st;
    for (size_t i = 0; i < k; i++)
    {
        st.push(que.front());
        que.pop();
    }
    //cout<<st.size()<<"  "<<que.size()<<endl;
    while(!st.empty())
    {
        que.push(st.top());
        st.pop();
    }
    //cout<<st.size()<<"  "<<que.size()<<endl;
    int rem = que.size() - k;
    while(rem--)
    {
        que.push(que.front());
        que.pop();
    }
    return que;
}
int main()
{
    system("cls");
    int n,k,q;
    cin>>n>>k;
    queue<int> que;
    for (size_t i = 0; i < n; i++)
    {
        cin>>q;
        cout<<q<<" ";
        que.push(q);
    }
    cout<<endl;
    reverseQueue(que,k);
    while(!que.empty())
    {
       cout<<que.front()<<"  ";
       que.pop();
    }
    return 0;
}