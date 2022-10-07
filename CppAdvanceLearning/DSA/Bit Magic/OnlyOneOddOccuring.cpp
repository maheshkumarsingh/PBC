#include <bits/stdc++.h>
using namespace std;

int checkOnlyOddOccuring(const int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << "  ";
    cout << endl;
    int res = 0;
    for (int i = 0; i < n; i++)
        res = res ^ arr[i];

    return res;
}
int main()
{
    system("cls");
    int arr[] = {4, 3, 4, 4, 4, 5, 5, 3, 3, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << checkOnlyOddOccuring(arr, n) << endl;
    return 0;
}