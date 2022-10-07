#include <bits/stdc++.h>
using namespace std;
int findLargestElement(const int arr[], int n)
{
    int maxi = arr[0];
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            index = i;
        }
    }
    return index;
}
int main()
{
    system("cls");
    int arr[] = {100};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << arr[findLargestElement(arr, n)];
    return 0;
}