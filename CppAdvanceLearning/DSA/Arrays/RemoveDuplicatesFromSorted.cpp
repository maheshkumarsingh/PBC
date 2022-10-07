#include <bits/stdc++.h>
using namespace std;

// void removeDuplicate(int arr[], int n)
// {
//     int res =1;
//     for (int  i = 1; i < n; i++)
//     {
//         if(arr[i]!= arr[res-1])
//         {
//             arr[res] = arr[i];
//             res++;
//         }
//     }
//     for (int i = 0; i < res; i++)
//     {
//         cout<<arr[i]<<"  ";
//     }
//     cout<<endl;

// }

void removeDuplicate(int arr[], int n)
{
    int temp[n];

    temp[0] = arr[0];
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        if(temp[res-1]!=arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {  
        cout<<temp[i]<<"  ";
    }
    cout<<endl;
}

int main()
{
    system("cls");
    int arr[] = {10, 20, 20, 20, 30, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    removeDuplicate(arr, n);
    return 0;
}