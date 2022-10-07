#include<bits/stdc++.h>
using namespace std;
vector<int> RemoveConsecutiveDuplicate(vector<int> vec, int x, int y)
{
    stack<int> st;
    st.push(vec[0]);
    vector<int> ans;
    for (int i = 1; i < vec.size(); i++)
    {
        
    }
    while(!st.empty())
    {
        vec.push_back(st.top());
        st.pop();
    }
    reverse(vec.begin(), vec.end());
    return vec;
}
int main()
{
    system("cls");
    vector<int> vec=  {2,1,2,2,1,5};
    // if(true)
    // cout<<"Ho"<<endl;
    // else if(true)
    // cout<<"hello"<<endl;
    vector<int> ans = RemoveConsecutiveDuplicate(vec, 1,2);
    for(auto x: ans)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}


// 2 1 2 2 1 5
// 1 1 2 2 2 5
