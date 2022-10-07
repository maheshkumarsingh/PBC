#include<bits/stdc++.h>
using namespace std;
vector<int> findNextGreatestElement(int arr[], int n)
{
    //reverse(arr, arr+n);
    vector<int> ans ;
    stack<int> st;
    ans.push_back(-1);
    st.push(n-1);
    for (int i = n-2; i >= 0; i--)
    {
        while(!st.empty()&& arr[i]>= arr[st.top()])
        st.pop();
        st.empty()?ans.push_back(-1):ans.push_back(arr[st.top()]);
        st.push(i);
    }
    return ans;
}
int main()
{
    system("cls");
     int arr[] = {5,15,10,8,6,12,9,18};
    //int arr[] ={10,15,20,25};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    vector<int> ans = findNextGreatestElement(arr, n);
    reverse(ans.begin(), ans.end());
    for (int x : ans)
        cout << x << " ";
    cout << endl<<endl<<endl;
    return 0;
}