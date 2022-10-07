#include<bits/stdc++.h>
using namespace std;
bool checkSorted( int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i+1]<arr[i])
        return false;
    }
    return true;
    
}
void reverseTheArray(int arr[], int n)
{
    for(int i=0;i<n/2;i++)
    {
        arr[i] = arr[i]+ arr[n-1-i];
        arr[n-1-i] = arr[i] - arr[n-1-i];
        arr[i] = arr[i] - arr[n-1-i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    system("cls");
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    checkSorted(arr, n)==true?cout<<"Sorted"<<endl : cout<<"Not Sorted"<<endl;
    reverseTheArray(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}