#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    //string text = "geeks for geeks";
    string text = "aaaaa";
    //string pattern = "geeks";
    string pattern = "aaa";

    for(int i=0;i<text.length();i++)
    {
        if(text.substr(i, pattern.length()) == pattern)
        cout<<i<<" ";
    }
    cout<<endl;
    int pos = text.find(pattern);    //0
    while(pos!= string::npos)  
    {
        cout<<pos<<" ";
        pos = text.find(pattern, pos+1);
    }
    return 0;
}