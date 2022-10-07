#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int arr[] = {10,5,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    //cout<<n<<endl;
    priority_queue<int> pq(arr, arr+n);
    priority_queue<int, vector<int>, greater<int>> pq1(arr, arr+n) ;

    //reverse(pq.top(), pq.top()+n);
    // while(pq.empty()==false)
    // {
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }
    cout<<endl;

    for(int i=n-1;i>=0;i--)
    {
        arr[i] = pq.top();
        pq.pop();
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    reverse(arr, arr+n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}