#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");

    set<int> s; // set used for printing element in order
    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }
    vector<int> v(s.begin(), s.end());
    return v;

    return 0;
}