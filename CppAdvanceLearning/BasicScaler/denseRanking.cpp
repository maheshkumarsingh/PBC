#include <bits/stdc++.h>
using namespace std;
// vector<int> climbingLeaderboard(vector<int> &ranked, vector<int> &player)
// {
//     set<int, greater<int>> s(ranked.begin(), ranked.end());
//     vector<int> ans;
//     for (int i : player)
//     {
//         s.insert(i);
//         auto it = s.find(i);
//         // s.erase(it, s.end());
//         int length = distance(s.begin(), it);
//         // ans.push_back(s.size()+1);
//         ans.push_back(length+1);

//     }
//     return ans;
// }
int posBinarySearch(vector<int> &ranked, int val)
{
    int low = 0;
    int high = ranked.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (ranked[mid] == val)
            return mid;
        else if (ranked[mid] > val)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
vector<int> climbingLeaderboard(vector<int> &ranked, vector<int> &player)
{
    vector<int> ans;
    reverse(ranked.begin(),ranked.end());
    for (auto &it : player)
    {
        int pos = posBinarySearch(ranked, it);
        ans.push_back(pos);
    }
    return ans;
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

/*def binarySearch(arr, x):
    (s, e) = (0, len(arr) - 1)
    while s <= e:
        mid = s + (e - s) // 2
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            s = mid + 1
        else:
            e = mid - 1
    return s


def climbingLeaderboard(ranked, player):
    sor = list(Counter(ranked).keys())
    ans = []
    for i in player:
        ans.append(binarySearch(sor, i) + 1)
    return ans*/