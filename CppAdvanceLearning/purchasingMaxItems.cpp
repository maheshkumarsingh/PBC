#include <bits/stdc++.h>
using namespace std;
int maxPurchase(vector<int> &arr, int sum)
{
    int count = 0;
    priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());

    while (!pq.empty() && sum >= pq.top() && sum >= 0)
    {
        sum -= pq.top();
        pq.pop();
        count++;
    }
    return count;
}
int main()
{
    system("cls");
    vector<int> arr = {20, 10, 5, 30, 100};
    int sum = 35;
    for (auto &it : arr)
        cout << it << " ";
    cout <<endl<< "Total money we have is "<<sum<<endl;

    cout << "Out of these items we can buy " << maxPurchase(arr, sum) << " items" << endl;
    return 0;
}