#include <bits/stdc++.h>
using namespace std;

bool isIsogram(string str)
{
    sort(str.begin(), str.end());

    for (int i = 0; i < str.length(); i++)
        if (str[i] == str[i + 1])
            return false;
    return true;
}
int main()
{
    system("cls");
    cout << isIsogram("machine");
    return 0;
}