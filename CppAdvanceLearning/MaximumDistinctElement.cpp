#include<bits/stdc++.h>
using namespace std;

int maximumDistictElement(int arr[], int n, int k)
{
    unordered_set<int> us(arr, arr+n);
    
    int dis = us.size();
    if(dis>=n/k)
    return n/k;
    else return dis;
    
}
int main()
{
    system("cls");
    // int arr[] = {1,2,2,1,3,1};
    int arr[] = {1,1,1,1,1,1,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k=2;
    int ans = maximumDistictElement(arr,n,k);
    cout<<ans;
    return 0;
}