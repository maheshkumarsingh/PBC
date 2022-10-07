#include <bits/stdc++.h>
using namespace std;

pair<int, int> findSecondLargestElement(int arr[], int n)
{
    pair<int, int> p;
    p.first = 0;
    p.second = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[p.first])
        {
            p.second = p.first;
            p.first = i;
        }
        else if (arr[i] != arr[p.first])
            if (p.second == -1 || arr[i] > arr[p.second])
                p.second = i;
    }
    return p;
}
int main()
{
    system("cls");
    int arr[] = {20, 10, 20, 8,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    pair<int, int> p = findSecondLargestElement(arr, n);
    cout << arr[p.first] << "   " << arr[p.second] << endl;
    return 0;
}