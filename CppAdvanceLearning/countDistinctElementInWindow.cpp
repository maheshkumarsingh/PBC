#include <bits/stdc++.h>
using namespace std;

vector<int> countDistictElement(int arr[], int n, int k) // 10,20,20,10,30,40,10
{                                                        // 2 3 4 3
    // vector<int> ans ;

    // for (int i = 0; i < n-k+1; i++)
    // {
    //     unordered_set<int> us;
    //     for (int j = i; j < k+i; j++)
    //     {
    //         us.insert(arr[j]);
    //     }
    //     ans.push_back(us.size());
    // }
    // return ans;

    vector<int> ans;
    for (int i = 0; i < n - k + 1; i++)
    {
        int count = 0;
        for (int j = 0; j < k; j++)
        {
            bool flag = false;
            for (int p = 0; p < j; p++)
            {
                if (arr[i + j] == arr[i + p])
                {
                    flag = true;
                    break;
                }
            }
            if (flag == false)
                count++;
        }
        ans.push_back(count);
    }
    return ans;
}

vector<int> countDistictElementUsingMap(int arr[], int n, int k)
{
    unordered_map<int,int> um;
    for(int i=0; i<k;i++)
    um[arr[i]]++;
    vector<int> ans;
    ans.push_back(um.size());
    for(int i=k;i<n;i++)
    {
        um[arr[i-k]]--;
        if(um[arr[i-k]]==0)
        um.erase(arr[i-k]);
        um[arr[i]]++;
        ans.push_back(um.size());
    }
    return ans;
}
int main()
{
    system("cls");
    int arr[] = {10, 20, 20, 10, 30, 40, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    vector<int> ans = countDistictElement(arr, n, k);
    for (auto x : ans)
    {
        cout << setw(2) << x << " ";
    }
    cout<<endl;

    ans = countDistictElementUsingMap(arr, n, k);
    for (auto x : ans)
    {
        cout << setw(2) << x << " ";
    }
    return 0;
}