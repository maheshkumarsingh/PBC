#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int arr[] = {10,10,20,20,30,30,10,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    map<int,int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for(auto x: freq)
    cout<<x.first<<"   "<<x.second<<endl;
    
    return 0;
}