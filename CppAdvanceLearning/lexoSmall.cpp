#include<bits/stdc++.h>
using namespace std;


string lexi_string(string s)
{
    //Your code here
    int i=0;
    string small=s;
    string newString=s;
    int n = s.length();
    while(i<n)
    {
        char front = newString[0];
        newString = newString.substr(1)+front;
        cout<<newString<<endl;
        small = min(small, newString);
        i++;
    }
    return small;
}
int main()
{
    system("cls");
    cout<<lexi_string("abca")<<endl;
    return 0;
}