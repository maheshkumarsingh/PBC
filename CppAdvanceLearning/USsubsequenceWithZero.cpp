#include <bits/stdc++.h>
using namespace std;
pair<bool, int> zeroLongestSubsequence(int arr[], int n)
{
    pair<bool, int> ans(false, 0);
    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == 0)
            {
                ans.first = true;
                ans.second = j + 1 - i;
                return ans;
            }
        }
    }
    return ans;
}
bool zeroLongestSubseq(int arr[], int n)
{
    unordered_set<int> us;
    int preSum = 0;
    for (int i = 0; i < n; i++)
    {
        preSum += arr[i];

        if (us.find(preSum) != us.end())
            return true;
        else if (preSum == 0)
            return true;
        else
            us.insert(preSum);
    }
    return false;
}

int main()
{
    system("cls");
    int arr[] = {1, 4, 13, -10, -3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    pair<bool, int> ans = zeroLongestSubsequence(arr, n);
    cout << ans.first << "  " << ans.second << endl;
    bool res = zeroLongestSubseq(arr, n);
    res == 1 ? cout << "True" : cout << "False";
    return 0;
}