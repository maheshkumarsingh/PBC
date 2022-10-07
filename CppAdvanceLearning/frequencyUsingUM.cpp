#include<bits/stdc++.h>
using namespace std;
bool myComp(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.second == p2.second)
    return p1.first<p2.first;
    return p1.second>p2.second;
}
void countFrequency(int arr[], int n)
{
    unordered_map<int , int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    vector<pair<int, int>> vec(mp.begin(), mp.end());

    sort(vec.begin(), vec.end(), myComp);
    for(auto x: vec)
    cout<<x.first<<"  "<<x.second<<endl;
}

vector<int> countFreqByPQ(int arr[], int n)
{
    unordered_map<int , int> um;
    for (int i = 0; i < n; i++)
    {
        um[arr[i]]++;
    }

    priority_queue<pair<int, int>> pq;

    for(auto x: um)
    pq.push({x.second, -1*x.first});
    vector<int> ans;
    while(pq.size())
    {
        int topElement = pq.top().second;
        int topElementFreq = pq.top().first;
        pq.pop();
        while(topElementFreq--)
        {
          ans.push_back(-1*topElement);
        }
    }
    return ans;
}
int main()
{
    system("cls");
    int arr[] =  {5,5,4,6,4,1,1,1,2,2,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    //countFrequency(arr, n);
    vector<int> ans = countFreqByPQ(arr, n);
    for(auto x: ans)
    cout<<x<<"  ";
    return 0;
}