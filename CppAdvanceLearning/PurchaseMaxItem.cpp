#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        arr[i]=k;
    }
    
    int k;
    cin>>k;

    priority_queue<int, vector<int>, greater<int>> pq(arr,arr+n);
    int sum=0;
    int i=0;
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        sum+=pq.top();
        pq.pop();
        if(sum>k)
        {
            cout<<endl<<i<<endl;
            break;
        }
        i++;
    }
    
    return 0;
}