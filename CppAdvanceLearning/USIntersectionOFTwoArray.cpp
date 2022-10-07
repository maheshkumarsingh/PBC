#include <bits/stdc++.h>
using namespace std;

void printIntersection(int arr1[], int arr2[], int n1, int n2)
{
    unordered_set<int> us;
    for (int i = 0; i < n2; i++)
    {
        us.insert(arr2[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        if (us.find(arr1[i]) != us.end())
            cout << arr1[i] << " ";
    }
}
int main()
{
    system("cls");

    int arr1[] = {10, 15, 20, 25, 30, 50};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {30, 5, 15, 80};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printIntersection(arr1, arr2, n1, n2);
    return 0;
}