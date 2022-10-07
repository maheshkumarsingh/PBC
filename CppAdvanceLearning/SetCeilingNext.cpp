#include <bits/stdc++.h>
using namespace std;

void ceilingNextByBruteForce(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int mini = INT_MAX;
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[j] >= arr[i])
                mini = min(mini, arr[j]);
        }
        if (mini == INT_MAX)
            cout << "-1"
                 << " ";
        else
            cout << mini << " ";
    }cout<<endl;
}

void ceilingNextUsingSet(int arr[], int n)
{
    set<int> se;
    int ans[n];

    for (int i = n - 1; i >= 0; i--)
    {
        auto it = se.upper_bound(arr[i]);
        if (it == se.end())
            ans[i] = -1;
        else
            ans[i] = *it;
        se.insert(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    system("cls");
    // int arr[] = {10, 100, 200,30,120,120};
    // int arr[] = {10, 20,30,40};
    // int arr[] = {40, 30, 20, 10};
    int arr[] = {100, 50, 30, 60, 55, 35};
    //int arr[] = {3,2, 5, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    ceilingNextByBruteForce(arr, n);
    ceilingNextUsingSet(arr, n);
    return 0;
}