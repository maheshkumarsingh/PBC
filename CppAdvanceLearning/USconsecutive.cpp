#include <bits/stdc++.h>
using namespace std;
void consecutiveElement(int arr[], int n)
{
    set<int> se(arr, arr + n);   //O(logn)
    int cur = 1,res = 1;
    for (auto it = se.begin(); it != se.end(); it++)  //O(n)
    {
        auto itr = it;
        int val = *it;
        // if (*(++itr) - *it == 1)
        if(se.find(val+1)!=se.end())
        {
            //cout << *itr << *it << endl;
            cur++;
        }
        else
        {
            res = max(res, cur);
            cur=1;
        }
    }
    cout << res;
}

int main()
{
    system("cls");
    // int arr[] = {1, 9, 3, 4, 2, 20};
    // int arr[] = {3,8,4,5,7,21,22,23,24,25,26};
    int arr[] = {1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    consecutiveElement(arr, n);
    return 0;
}