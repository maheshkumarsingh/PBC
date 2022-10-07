#include<bits/stdc++.h>
using namespace std;
string RemoveAllConsecutiveDuplicates(string str)
{
    reverse(str.begin(), str.end());
    cout<<str<<endl;
    stack<char> st;
    st.push(str[0]);
    for(int i=1;i<str.length();i++)
    {
       if(str[i]!= st.top())
       st.push(str[i]);
    }
    string str1="";
    while(!st.empty())
    {
       str1+= st.top();
       st.pop();
    }
    return str1;
}
int main()
{
    system("cls");
    string str = "aaaaaabaabccccccc";
    string str1 = RemoveAllConsecutiveDuplicates(str);
    cout<<str1<<endl;
    return 0;
}