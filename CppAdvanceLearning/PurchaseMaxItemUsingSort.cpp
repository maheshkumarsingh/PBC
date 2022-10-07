#include <bits/stdc++.h>
using namespace std;
int MaxToys(int arr[], int n, int sum)
{
    // sort(arr, arr + n);
    // int res = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum -= arr[i];
    //     if (sum < 0)
    //         return res;
    //     else
    //         res++;
    // }
    // return res;

    priority_queue<int, vector<int> , greater<int>> pq(arr, arr+n);
    int res=0;
    while(pq.empty()==false && sum>=0 && pq.top()<=sum)
    {
        sum-= pq.top();
        pq.pop();
        res++;
    }
    return res;
}
using namespace std;
int main()
{
    system("cls");
    int arr[] = {10,12,20,30,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 25;
    cout << MaxToys(arr, n, sum);

    return 0;
}