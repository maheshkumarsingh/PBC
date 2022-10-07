#include<bits/stdc++.h>
using namespace std;

bool checkPangram(const string &str)
{
    unordered_map<char, int> mp;

    for(auto x: str)
    mp[x]++;
    for (int i = 0; i < 26; i++)
    {
        if(mp[i+'a']==0)
        return false;
    }
    return true;
}
int main()
{
    system("cls");
    //string str = "The quick Brown fox jUmps over the lazy dog";
    string str = "aBcdefghijklmNopqrstuvwxyz";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str<<endl;

    bool ans = checkPangram(str);
    cout<<ans<<endl;
    return 0;
}