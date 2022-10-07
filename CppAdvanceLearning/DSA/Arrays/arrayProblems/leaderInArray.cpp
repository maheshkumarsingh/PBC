#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int arr[] = {7, 10, 4, 10, 6, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int curr_leader = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (curr_leader <= arr[i])
        {
            curr_leader = arr[i];
            cout << curr_leader << " ";
        }
    }
    cout << endl;

    return 0;
}