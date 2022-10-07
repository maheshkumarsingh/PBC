#include <bits/stdc++.h>
using namespace std;

vector<int> constructLowerArray(int *arr, int n)
{
    // code here
    // vector<int> ans;
    // ans.push_back(0);
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     int count = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         if (i != j && arr[j] < arr[i])
    //             count++;
    //     }
    //     ans.push_back(count);
    // }
    // return ans;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]] = n-1-i;
    }
    
    for (int i = 0; i < n; i++)
    {
        
    }
    
}

int main()
{
    system("cls");
    int arr[] = {12, 1, 2, 3, 0, 11, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans = constructLowerArray(arr, n);
    for(int i=n-1;i>=0;i--)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
