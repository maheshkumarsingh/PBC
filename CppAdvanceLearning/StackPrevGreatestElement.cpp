#include<bits/stdc++.h>
using namespace std;

vector<int> findPrevGreatestElement(int arr[], int n)
{
    // vector<int> ans ;
    // stack<int> st;
    // ans.push_back(-1);
    // st.push(0);
    // for (int i = 1; i < n; i++)
    // {
    //     while(!st.empty()&& arr[i]>= arr[st.top()])
    //     st.pop();
    //     st.empty()?ans.push_back(-1):ans.push_back(arr[st.top()]);
    //     st.push(i);
    // }
    // return ans;

    vector<int> ans;
    ans.push_back(-1);
    stack<int> st;
    st.push(0);

    for (int i = 0; i < n; i++)
    {
        while(!st.empty()  && arr[i] < arr[st.top()])
        st.pop();
        st.empty()?ans.push_back(-1):ans.push_back(arr[st.top()]);
        st.push(i);
    }
    return ans;
    

}
int main()
{
    system("cls");
    int arr[] = {15,10,18,12,4,6,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    vector<int> ans = findPrevGreatestElement(arr, n);
    for (int x : ans)
        cout << x << " ";
    cout << endl<<endl<<endl;
    return 0;
}