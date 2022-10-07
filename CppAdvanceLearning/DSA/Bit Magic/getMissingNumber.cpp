#include <bits/stdc++.h>
using namespace std;

int getMissingNumber(const int *arr, int n)
{
    int x1 = arr[0];
    int x2 = 1;
    for (int i = 1; i < n; i++)
    {
        x1 = x1 ^ arr[i];
    }
    for (int i = 2; i <= n+1; i++)
    {
        x2 = x2 ^ i;
    }
    cout<<x1<<" "<<x2<<endl;
    return x1 ^ x2;
    
}
int main()
{
    system("cls");
    int arr[] = {1,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getMissingNumber(arr, n);
    return 0;
}