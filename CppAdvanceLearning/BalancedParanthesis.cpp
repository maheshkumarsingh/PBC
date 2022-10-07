#include<bits/stdc++.h>
using namespace std;

bool matching(char a , char b)
{
    return (a=='(' && b==')') || (a=='{' && b=='}') ||(a=='[' && b==']') ;
}
bool checkBalancedParanthesis(string str)  //"(())"
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]=='[' || str[i]=='{' || str[i]== '(')  //(
           st.push(str[i]);
        else
        {
            if(st.empty())
            return false;
            else if(matching(st.top(), str[i])== false)
            return false;
            else
            st.pop();
        }
        return (st.empty()==true);
    }
     if(st.empty())
     return true;
     else return false;
    
}
int main()
{
    system("cls");
    string str = ")(";
    if(checkBalancedParanthesis(str))
    cout<<"Balanced Paranthesis :)"<<endl;
    else
    cout<<"UnBalanced Paranthesis :("<<endl;
    return 0;
}