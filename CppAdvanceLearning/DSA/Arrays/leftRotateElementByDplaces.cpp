#include<bits/stdc++.h>
using namespace std;

void leftRotateByDPlaces(int arr[] , int n)
{

}
int main()
{
    system("cls");
    int arr[] = {10,20,30,40,50,60,70 };
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    leftRotateByDPlaces(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}