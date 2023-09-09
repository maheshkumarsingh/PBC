#include <bits/stdc++.h>
using namespace std;

int getTheLastManStandingInACircle(int person)
{
    vector<int> ans(person);
    for (int i = 0; i < person; i++)
    {
        ans[i] = i+1;
    }
    int pos = 0;
    while (ans.size() > 1)
    {
        pos++;
        pos %= ans.size();
        ans.erase(ans.begin() + pos);
    }
    return ans.at(0);
}
int main()
{
    system("cls");
    int person;
    string myWords;
    cin >> person;
    getline(cin, myWords);
    cout<<myWords<<endl;
    // cout<<normalCalculatiion(person);
    cout << getTheLastManStandingInACircle(person);
    return 0;
}