#include<bits/stdc++.h>
using namespace std;
vector<int> distictValue(int arr[], int n)
{
    set<int> se(arr, arr+n);
    vector<int> ans(se.begin(), se.end());
    return ans;
}
int main()
{
    system("cls");
    int arr[] = {100, 50, 50,50,100,30,40,60,30,40,60,30, 60, 55, 35};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for(auto x: mp)
    cout<<x.first<<" ";
    cout<<endl;
    vector<int> ans = distictValue(arr, n);
    for(auto x: ans)
    cout<<x<<" ";
    cout<<endl;

    string str= "maheshmahesh";
    set<char> se(str.begin(), str.end());
    for(auto x: se)
    cout<<x;
    cout<<endl;
    return 0;
}