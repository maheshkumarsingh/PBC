#include <bits/stdc++.h>
using namespace std;
int sumExists(int arr[], int n, int sum)
{
    // unordered_set<int>s;
    // for(int i=0;i<n;i++)
    // {
    //     if(s.find(sum-arr[i])!=s.end())
    //     return 1;
    //     else
    //     s.insert(arr[i]);
    // }
    // sort(arr, arr+n);
    // int i=0,j=n-1;
    // while(i<j)
    // {
    //     int s = arr[i]+arr[j];
    //     if(s==sum)
    //     {
    //     cout<<arr[i]<<" "<<arr[j]<<endl;
    //     return 1;
    //     }
    //     else if(s>sum)
    //     i--;
    //     else
    //     i++;
    // }
    set<int> se(arr, arr + n);
    auto itr = se.begin();
    int s = 0;
    while (itr != se.end())
    {
        int val = *se.lower_bound(*itr);
        if (2 * val == sum)
        {
            cout << val << endl;
            return 1;
        }
        else
            itr++;
    }
    return -1;
}
int main()
{
    system("cls");
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = sumExists(arr, n, 14);
    cout << sum << endl;
    return 0;
}