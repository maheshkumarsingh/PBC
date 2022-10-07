//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int missingNumber(int arr[], int n)
{
    // Your code here

    int mini = INT_MAX;
    int maxi = INT_MIN;

    unordered_map<int, int> mp;
    for (int i = 0; i <n; i++)
    {
        maxi = max(arr[i], maxi);
        if(arr[i]>0)
        mp[arr[i]]++;
    }

    for(int i=1;i<= maxi;i++)
    if(mp.find(i)== mp.end())
    return i;

    return n+1;
}

//{ Driver Code Starts.

int main()
{

    // input number n
    system("cls");

    //int arr[] = {0, -10, 1, 3, -20};
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // calling missingNumber()
    int ans = missingNumber(arr, n);
    cout << ans << endl;

    return 0;
}
// } Driver Code Ends