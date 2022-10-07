#include<bits/stdc++.h>
using namespace std;


vector<int> rearrangeArray(long long *arr, int n)
{
    // vector<int> vec;
    
    // int start =0, end=n-1;

    // while(start<=end)
    // {
    //     vec.push_back(arr[end]);
    //     vec.push_back(arr[start]);
    //     start++;
    //     end--;
    // }
    // return vec;

    
}
int main()
{
    system("cls");

    //long long arr[]={10,20,30,40,50,60,70,80,90,100,110};
    long long arr[] = {1,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> ans = rearrangeArray(arr, n);
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    return 0;
}