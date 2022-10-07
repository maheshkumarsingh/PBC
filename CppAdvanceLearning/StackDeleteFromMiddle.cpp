#include <bits/stdc++.h>
using namespace std;
void deleteMid(stack<int> &st, int n)
{
    stack<int> temp;
    for (int i = 1; i < ceil(n + 1) / 2; i++)
    {
        temp.push(st.top());
        st.pop();
    }
    st.pop();
    for (int i = 1; i < ceil(n + 1) / 2; i++)
    {
        st.push(temp.top());
        temp.pop();
    }

    while(!st.empty())
    {
        cout<<st.top()<<"  ";
        st.pop();
    }
}
using namespace std;
int main()
{
    system("cls");
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        st.push(k);
    }
    deleteMid(st,n);
    return 0;
}