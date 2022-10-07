#include<bits/stdc++.h>
using namespace std;
vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
       priority_queue<int> pq(arr, arr+n);
       vector<int> vec;
       int i=0;
       while(i<k)
       {
           vec.push_back(pq.top());
           pq.pop();
           i++;
       }
       return vec;
    }
int main()
{
    system("cls");
    int arr[]= {12,5,787,1,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans = kLargest(arr, n,2);
    for(auto x: ans)
    cout<<x<<" ";
    return 0;
}