#include <bits/stdc++.h>
using namespace std;

void countGreaterElementsNaive(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j] && i != j)
                count++;
        }
        cout << arr[i] << "  " << count << endl;
    }
}

void countGreaterElementsBySort(int arr[], int n)
{
    sort(arr, arr + n);
    int ans[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        if (i == n - 1)
            ans[arr[i]] = 0;
        else if (i != 0 && arr[i] == arr[i - 1])
            ans[arr[i]] = ans[arr[i - 1]];
        else if (arr[i] == arr[i + 1])
        {
            j++;
            ans[arr[i]] = n - 1 - i - j;
        }
    }
    int maxi = *max_element(arr, arr + n);
    for (int i = 0; i <= maxi; i++)
    {
        if (i == arr[i])
            cout << i << "   " << ans[i] << endl;
    }
}
void countGreaterElementsByMap(int arr[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int cum_freq =0;
    for (auto it = mp.rbegin(); it!= mp.rend(); it++)
    {
        int freq = it->second;
        it->second = cum_freq;
        cum_freq+= freq;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"   "<<mp[arr[i]]<<endl;
    }
    
}
int main()
{
    system("cls");
    int arr[] = {10, 5, 8, 20, 30, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    // vector<pair<int, int>> vec;
    // for (int i = 0; i < n; i++)
    // {
    //     vec.push_back(i)= make_pair(arr[i], arr[i]);
    // }
    // cout<<"ans"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<vec[i].first<<" "<<vec[i].second<<endl;
    //     }

    // }

    cout << endl;
    countGreaterElementsNaive(arr, n);
    //cout << "The flow" << endl;
    //countGreaterElementsBySort(arr, n);
    cout << "Using Map Data Structure:" << endl;
    countGreaterElementsByMap(arr, n);

    return 0;
}