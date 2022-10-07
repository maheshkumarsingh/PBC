#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> getFrequency(int arr[], int n)
{
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
                count++;
        }

        vec.push_back(make_pair(arr[i], count));
    }
    return vec;
}
void getFrequencyUsingMap(string arr[], int n)
{
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    int res = 0;
    string ans = "";
    for (auto x : mp)
    {
        if (x.second > res)
        {
            res = x.second;
            ans = x.first;
        }
    }
    cout << res << "    " << ans << endl;
}
int main()
{
    system("cls");

    int arr[] = {1, 4, 13, -10, -3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<pair<int, int>> vec = getFrequency(arr, n);
    cout << vec.size() << endl;
    for (auto x : vec)
        cout << setw(4) << x.first << "      " << x.second << endl;
    cout << endl;
    string arr1[] = {"abc", "xyx", "abc", "pqr", "abc", "xyz", "pqr", "abc"};
    n = sizeof(arr1) / sizeof(arr1[0]);
    for(auto x: arr)
    cout<<x<<endl;
    getFrequencyUsingMap(arr1, n);

    return 0;
}