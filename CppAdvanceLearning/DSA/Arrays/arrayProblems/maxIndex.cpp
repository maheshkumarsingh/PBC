#include<bits/stdc++.h>
using namespace std;
int maxDifference(int arr[], int n)
{
    int lmin[n], rmax[n];
    lmin[0] = arr[0];
    cout<<lmin[0]<<setw(3);
    for (int i = 1; i < n; i++)
    {
        lmin[i] = min(arr[i], lmin[i-1]);
        cout<<lmin[i]<<setw(3);
    }
    cout<<endl;
    rmax[n-1] = arr[n-1];
    for (int i = n-2; i >=0; i--)
    {
        rmax[i] = max(arr[i], rmax[i+1]);
    }
    for(int i=0;i<n;i++)
    cout<<rmax[i]<<setw(3);
    cout<<endl;
    
    int left=0,right=0;
    int res=-1;
    while(left<n && right<n)
    {
        if(lmin[left]<= rmax[right])
        {
            cout<<lmin[left]<<setw(3)<<rmax[right]<<setw(3)<<res<<setw(3)<<left<<setw(3)<<right<<endl;
            res = max(res, right - left);
            right++;
        }else{
            left++;
        }
    }
    return res;    
}
int main()
{
    system("cls");
    int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = maxDifference(arr, n);
    cout<<ans<<endl;
    return 0;
}