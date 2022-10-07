#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int arr[] = {4,3,4,4,4,5,5,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cout<<res<<"  "<<arr[i]<<" ";
        res = res ^ arr[i];
        cout<<res<<endl;
    }
    
    return 0;
}