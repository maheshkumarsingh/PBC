#include<bits/stdc++.h>
using namespace std;

bool myComp(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second> p2.second;
}
void findMostFrequency(int arr[], int n)
{
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    
    vector<pair<int,int>> vec(mp.begin(), mp.end());
    
    //reverse(vec.begin(), vec.end());
    sort(vec.begin(), vec.end(),myComp);
    int k=2,sum=0;
    for(int i=0;i<k;i++)
    {
        sum+= vec[i].second;
    }
    cout<<sum<<endl;
}
int main()
{
    system("cls");
    int arr[] = {3,1,4,4,5,2,6,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    findMostFrequency(arr, n);
    return 0;
}