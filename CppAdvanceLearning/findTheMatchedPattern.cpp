#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict, string pattern)
{
    int count = 0, countVec = 0;
    vector<string> ans;
    for (int i = 0; i < pattern.length(); i++)
        if ((pattern[i] == pattern[i + 1]))
            count++;
    cout<<"count: "<<count<<endl;
    for (int i = 0; i < dict.size(); i++)
    {
        for (int j = 0; j < dict[i].length(); j++)
            if ((dict[i][j] == dict[i][j + 1]))
                countVec++;
        cout<<"count vec: "<<countVec<<endl;
        if (count == countVec)
            ans.push_back(dict[i]);
    }
    return ans;
}
int main()
{
    system("cls");
    vector<string> dict = {"abb", "abc", "xyz", "xyy"};
    string pattern = "foo";
    vector<string> ans = findMatchedWords(dict, pattern);
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}