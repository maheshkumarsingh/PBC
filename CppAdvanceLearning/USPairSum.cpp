#include<bits/stdc++.h>
using namespace std;

void checkPair(int arr[], int n, int sum)
{
    sort(arr, arr+n);
    int i=0,s=0;
    int j=n-1;
    while(i<j)
    {
        s = arr[i]+ arr[j];
        if(s==sum)
        cout<<arr[i]<<"   "<<arr[j]<<endl;
        else if(s>sum)
        j--;
        else
        i++;
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