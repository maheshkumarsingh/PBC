#include<bits/stdc++.h>
using namespace std;

void correspondingPair(int arr1[], int arr2[], int N, pair<int,int> pair1[])
{
    for (int i = 0; i < N; i++)
    {
        pair1[i].first = arr1[i];
        pair1[i].second = arr2[i];

    }
    
}
int main()
{
    system("cls");
    int arr1[] ={1,2,3,4,5};
    int arr2[] ={6,7,8,9,10};
    int N = sizeof(arr1)/sizeof(arr1[0]);
    pair<int,int> pair1[N];

    correspondingPair(arr1, arr2, N, pair1);

    for (int i = 0; i < N; i++)
    {
        cout<<pair1[i].first<<" "<<pair1[i].second<<"|"<<" ";
    }
    
    return 0;
}