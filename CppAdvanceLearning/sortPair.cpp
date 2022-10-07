#include<bits/stdc++.h>
using namespace std;

void sortArray(int a[], char b[], int n )
{
    pair<int,char> pair1[n];

    for (int i = 0; i < n; i++)
    {
        pair1[i].first = a[i];
        pair1[i].second = b[i];
    }

    sort(pair1, pair1+n);

    for (int i = 0; i < n; i++)
    {
        cout<<pair1[i].first<<"  "<<(char)pair1[i].second<<"|"<<" ";
    }
    
    
}
int main()
{
    system("cls");
    
    int a[] = {3, 1, 2};
    char b[] = {'G', 'E', 'K'};
    
    sortArray(a, b, 3);
    return 0;
}