#include <bits/stdc++.h>
using namespace std;

void printKFrequent(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    
    vector<int> freq[n+1];
    for(auto x: mp)
    freq[x.second].push_back(x.first);

    for (int i = n; i >=0; i--)
    {
        for(auto x: freq[i])
        cout<<x<<"  "<<i<<endl;
    }
    
    
}
int main()
{
    system("cls");
    int arr[] = {10,20,100,100,100,10,20,10,20,30,40,50,50,60,70,70,80,10,20,30};
    int n = sizeof(arr) / sizeof(arr[0]);
    printKFrequent(arr, n);
    return 0;
}