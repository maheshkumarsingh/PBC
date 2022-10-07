#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string str1 = "silent";
    string str2 = "listen";
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    str1 == str2 ? cout << "Anagram" << endl : cout << "Not anagram" << endl;
    return 0;
}