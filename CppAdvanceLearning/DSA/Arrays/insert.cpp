#include <bits/stdc++.h>
using namespace std;

int insertInArray(int *arr, int x, int pos, int n)
{
    int index = pos-1;
    for (int i = n-1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = x;
    return n+1;
}
int main()
{
    system("cls");
    int arr[] = {1, 2, 3, 4, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int pos = 5;
    int newSize = insertInArray(arr, x, pos, n);
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}