#include <bits/stdc++.h>
using namespace std;

void moveZeroesToEnd(int arr[], int n)
{
    // 1 1 0 0 2 2 0 0 0 4 4 5 5

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i]==0)
    //     {
    //         for (int j = i+1; j < n; j++)
    //         {
    //             if(arr[j]!=0)
    //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }
}
int main()
{
    system("cls");
    int arr[] = {10, 20, 0, 4, 0, 0, 7, 9, 0, 0, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    moveZeroesToEnd(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}