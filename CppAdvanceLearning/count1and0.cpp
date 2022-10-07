#include<bits/stdc++.h>
using namespace std;

bool isIsogram(string str)
{
    int mapHash[26] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        mapHash[str[i]-'a']++;
        if (mapHash[str[i]-'a'] > 1)
        {
            return false;
        }
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     cout<<mapHash[i]<<endl;
    // }
    
    return true;
}
int main()
{
    system("cls");
    cout<<isIsogram("machine");
    return 0;
}