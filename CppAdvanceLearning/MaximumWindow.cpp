#include <bits/stdc++.h>
using namespace std;

void findMaxInWindow(int arr[], int n, int k)
{
    deque<int> dq(k);
    int i;
    for (i=0; i < k; i++)
    {
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }

    for (; i < n; i++)
    {
        cout<<arr[dq.front()]<<"  ";

        while(!dq.empty() && dq.front() <= i-k)
        dq.pop_front();

        while(!dq.empty() && arr[i] >= arr[dq.back()])
        dq.pop_back();

        dq.push_back(i);
    }
    cout<<arr[dq.front()]<<endl;
}
int main()
{
    system("cls");

    // int arr[] = {10, 8, 5, 12, 78, 54, 33};
    // int arr[] = {5, 8, 10, 34, 54, 1, 0, 44, 67, 9, 3, 20, 45};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // int k;
    // cin >> k;
    // for (int i = 0; i < n + 1 - k; i++)
    // {
    //     int maxi = arr[i];
    //     for (int j = i; j < i + k; j++)
    //         maxi = max(maxi, arr[j]);
    //     cout << maxi << "  ";
    // }
    // 34  54  54  54  54  67  67  67  67  45
    // using Deque
    int arr[] = {5, 8, 10, 34, 54, 1, 0, 44, 67, 9, 3, 20, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin >> k;
    findMaxInWindow(arr, n, k);

    return 0;
}