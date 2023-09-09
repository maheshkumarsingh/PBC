#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string str = "9216";
    int n = str.length();
    cout<<str.substr(n-3,n)<<endl;
    reverse(str.begin(), str.end());
    int lastdigits = str[0] - '0';
    int power =10;
    for (int i = 1; i < 3; i++)
    {
        int num = (str[i] - '0');
        lastdigits = lastdigits + (num*power);
        cout<<num<<" "<<num*power<<" "<<lastdigits<<endl;
        power *=10;
    }
    cout<<lastdigits<<" "<<lastdigits %8<<endl;
    return 0;
}