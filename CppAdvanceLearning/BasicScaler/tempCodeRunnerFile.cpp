#include <bits/stdc++.h>
using namespace std;
vector<int> climbingLeaderboard(vector<int> &ranked, vector<int> &player)
{
    for (int i = 0; i < player.size(); i++)
    {
        int span = 1;
        sort(ranked.begin(), ranked.end(), greater<>());
        for (int j = 0; j < ranked.size(); j++)
        {
            if (player[i] >= ranked[j])
            {
                span++;
                ranked.push_back(player[i]);
                player[i] = span;
                break;
            }
            else if (j != 0 && ranked[j] != ranked[j - 1])
            {
                span++;
            }

            if (j == ranked.size() - 1)
            {
                cout << "break " << player[i] << endl;
                ranked.push_back(player[i]);
                player[i] = ++span;
            }
        }
    }
    return player;
}
int main()
{
    system("cls");
    vector<int> a = {100, 90, 90, 80};
    vector<int> b = {70, 80, 105};
    vector<int> ans = climbingLeaderboard(a, b);
    for (auto &it : ans)
        cout << it << " ";
    return 0;
}