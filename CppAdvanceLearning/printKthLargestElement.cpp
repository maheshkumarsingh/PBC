#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int arr[] ={1,23,12,9,30,2,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    priority_queue<int, vector<int>, greater<int>> pq(arr, arr+n);

    int k;
    cin>>k;
    int i = 0;
    while(i<n-k)
    {
        pq.pop();
        i++;
    }
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}