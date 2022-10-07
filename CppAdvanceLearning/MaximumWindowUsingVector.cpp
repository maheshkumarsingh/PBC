#include <bits/stdc++.h>
using namespace std;

vector<int> findMaximumInWindow(int arr[], int n, int k)
{
    vector<int> ans;
    cout<<ans.size();
    deque<int> dq(k);
    for (int i = 0; i < k; i++)
        dq.push_back(arr[i]);
    ans.push_back(*max_element(dq.begin(), dq.end()));

    for (int i = k; i <n; i++)
    {
        dq.pop_front();
        dq.push_back(arr[i]);
        ans.push_back(*max_element(dq.begin(), dq.end()));
    }
    return ans;

}
int main()
{
    system("cls");
    int arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    int n = sizeof(arr)/sizeof(sizeof(arr[0]));
    int k;
    cin>>k;
    vector<int> ans = findMaximumInWindow(arr,n,k);
    for(auto itr = ans.begin(); itr!=ans.end();itr++)
    cout<<*itr<<" ";
    cout<<endl;
    return 0;
}