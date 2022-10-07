#include <bits/stdc++.h>
using namespace std;

// aba ab aba aba ab
// aba ab aba1 aba2 ab1
vector<string> login_syetm(vector<string> vec)
{
    vector<string> ans;
    unordered_map<string, int> um;
    for(auto x: vec)
    {
        um[x]++;

        if(um[x]==1) ans.push_back(x);
        else if(um[x]>1) ans.push_back(x+ to_string(um[x]-1));
    }
    
    return ans;
}
int main()
{
    system("cls");

    vector<string> v = {"abc", "xyz", "abc", "pqr", "abc", "xyz", "pqr", "abc"};

    vector<string> ans = login_syetm(v);
    for (auto x : ans)
        cout << x << "  ";
    return 0;
}