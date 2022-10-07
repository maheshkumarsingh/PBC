#include <bits/stdc++.h>
using namespace std;

int verticalSum(vector<vector<int>> vec)
{
    int maxi = vec[0].size();
    for (int i = 1; i < vec.size(); i++)
    {
        maxi = max(maxi, (int)vec[i].size());
    }
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     if(vec[i].size() == maxi)
    //     continue;
    //     for (int j = vec[i].size()-1; j <= maxi; j++)
    //         vec[i].emplace_back(0);
    // }

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     for (int j = 0; j < vec[i].size(); j++)
    //         cout << vec[i][j] << " ";
    //     cout << endl;
    // }
    vector<int> sum_vec(maxi, 0);
    for (int i = 0; i < vec.size(); i++)
        for (int j = 0; j < vec[i].size(); j++)
            sum_vec[j] += vec[i][j];
    for(auto x: sum_vec)
    cout<<x<<" ";
    return *min_element(sum_vec.begin(), sum_vec.end());
}

int main()
{
    system("cls");
    int n, m;
    cin >> n;
    vector<vector<int>> vec;
    for (int i = 0; i < n; i++)
    {
        m = 0;
        cin >> m;
        vector<int> temp;
        for (int i = 0; i < m; i++)
        {
            int k;
            cin >> k;
            temp.push_back(k);
        }
        // cout << temp.size() << endl;
        vec.push_back(temp);
    }
    // cout << vec.size() << endl;
    cout << endl
         << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
    int sum = verticalSum(vec);
    cout << sum << endl;
    return 0;
}