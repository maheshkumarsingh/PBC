#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> array_of_pairs(int arr[], int n)
{
    vector<pair<int,int>> ans;
    cout<<ceil(n/2)<<endl;
    cout<<ceil(n*1.0/2)<<endl;
    for (int i = 0; i<ceil(n*1.0/2); i++)
    {
        ans.push_back({arr[i],arr[n-i-1]});
    }
    return ans;
}
int main()
{
    system("cls");
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<pair<int, int>> ans = array_of_pairs(arr, n);
    for (int i = 0; i < ans.size(); i++)
        cout << "(" << ans[i].first << "," << ans[i].second << ")"<<" ";
    cout << endl;
    
    return 0;
}