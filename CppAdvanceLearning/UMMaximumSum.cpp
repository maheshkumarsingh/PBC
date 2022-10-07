#include <bits/stdc++.h>
using namespace std;

//{1, 1, 2, 3, 3}

long maximumSum(vector<int> vec, int k)
{
    unordered_map<int, int> um;

    for (auto x : vec)
        um[x]++;

    priority_queue<pair<int, int>> pq;

    for (auto x : um)
        pq.push({x.second, x.first});

    long sum = 0;

    for (int i = 1; i <= k; i++)
    {
        pair<int, int> p = pq.top();
        cout << p.first << "  " << p.second << endl;
        sum += p.second;
        pq.pop();
        pq.push({p.first - 1, p.second});
    }
    return sum;
}
int main()
{
    system("cls");
    vector<int> vec = {1, 1, 2, 3, 3};

    long ans = maximumSum(vec, 3);
    cout << ans << endl;
    return 0;
}
