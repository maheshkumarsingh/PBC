#include<bits/stdc++.h>
using namespace std;

char findRepeatedCharacter(string str)
{
    unordered_map<char,int> mp;
    for(auto x: str)
    {
        mp[x]++;
        if(mp[x]==2)
        {
            return x;
        }
    }
    return '-';
}
int main()
{
    system("cls");
    string str ="abcde";
    char ans = findRepeatedCharacter(str);
    cout<<ans<<endl;
    return 0;
}