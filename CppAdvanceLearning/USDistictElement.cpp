#include <bits/stdc++.h>
using namespace std;
vector<int> uniqueElements(int arr[], int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
            if (arr[i] == arr[j])
                flag = true;

        if (!flag)ans.push_back(arr[i]);
    }
    return ans;
}
int main()
{
    system("cls");
    int arr[] = {7, 2, 9, 4, 3, 2, 10, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans = uniqueElements(arr, n);
    for (auto x : ans)
        cout << x << " ";
    return 0;
}