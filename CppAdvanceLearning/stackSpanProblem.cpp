#include <bits/stdc++.h>
using namespace std;
vector<int> theSpanProblem(const vector<int> &arr)
{
    stack<int> st;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        while (!st.empty() && arr[i] >= arr[st.top()])
        {
            st.pop();
        }
        ans.push_back((st.empty()) ? (i + 1) : (i - st.top()));
        st.push(i);
    }
    return ans;
}
int main()
{
    system("cls");
    vector<int> arr = {15, 13, 12, 14, 16, 8, 6, 4, 10, 30};
    vector<int> ans = theSpanProblem(arr);
    for (size_t i = 0; i < arr.size(); i++)
        cout << arr[i] <<setw(3)<< ans[i] << endl;
    return 0;
}