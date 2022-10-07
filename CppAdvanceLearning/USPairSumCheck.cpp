#include<bits/stdc++.h>
using namespace std;

void checkPair(int arr[], int n , int sum)
{
    unordered_set<int> us;
    for (int i = 0; i < n; i++)
    {
        if(us.find(sum-arr[i])==us.end())
        us.insert(arr[i]);
        else
        cout<<arr[i]<<"  "<<sum-arr[i]<<endl;
    }
    
}
int main()
{
    system("cls");
    int arr[] = {12, 1, 2, 3, 0, 11, 4};
    int n = sizeof(arr) / sizeof(arr[0]); 
    checkPair(arr, n , 15);
    return 0;
}