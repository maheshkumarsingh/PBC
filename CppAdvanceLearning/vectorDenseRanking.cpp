#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    vector<int> ranked = {100, 100, 50, 40, 40, 20, 10, 4};
    vector<int> player = {5, 25, 50, 120};
    ranked.insert(ranked.end(), player.begin(), player.end());
    for (auto &it : ranked)
    {
        cout << it << " ";
    }
    cout << endl;
    sort(ranked.begin(), ranked.end(), greater<int>());
    for (auto &it : ranked)
    {
        cout << it << " ";
    }
    cout << endl;
    vector<pair<int, int>> ans;
    int rank = 1;
    ans.push_back({ranked[0], rank});
    for (int i = 1; i < ranked.size(); i++)
    {
        if (ranked[i] != ranked[i - 1])
        {
            rank++;
            ans.push_back({ranked[i], rank});
        }
        else
        {
            ans.push_back({ranked[i], rank});
        }
    }
    // unordered_map<int,int> mp;
    // for(auto &it:ranked)
    // mp[it]++;
    for (auto &it : ans)
    {
        cout << it.first << " " << it.second << endl;
    }
    for (auto it1 : player)
    {
        for (auto it2 : ans)
        {
            if (it1 == it2.first)
            {
                cout << it2.second << endl;
                break;
            }
        }
    }
    return 0;
}