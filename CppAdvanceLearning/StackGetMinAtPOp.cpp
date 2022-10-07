#include <bits/stdc++.h>
using namespace std;

stack<int> pushIntoStack(int *arr, int n)
{
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        st.push(arr[i]);
    }
    return st;
}

int getMin(stack<int> st)
{
    int mini = INT_MAX;
    while(!st.empty())
    {
        mini = min(mini, st.top());
        st.pop();
    }
    return mini;
}
void getMinAtTop(stack<int> st)
{
    int x=0;
    while(!st.empty())
    {
        x = getMin(st);
        st.pop();
        cout<<x<<" ";
    }

}
int main()
{
    system("cls");
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    stack<int> st = pushIntoStack(arr, n);
    getMinAtTop(st);
    cout << endl;
    return 0;
}

//1 2 3 4 5
//5 4 3 2 1