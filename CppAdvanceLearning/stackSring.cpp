#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string str = "geeks";
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
      st.push(str[i]);
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}