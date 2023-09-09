#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    string str;
    getline(cin, str);
    str.append(str);
    cout << str << endl;
    string pattern = "kumar";
    int pos = str.find(pattern);
    while (pos != string::npos)
    {
        cout << pos << " ";
        pos = str.find(pattern, pos + 1);
    }
    return 0;
}