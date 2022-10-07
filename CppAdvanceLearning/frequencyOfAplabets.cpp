#include<bits/stdc++.h>
using namespace std;
void findFrequency(string str)
{
    map<char, int> mp;
    for (int i = 0; i < str.size(); i++)
        mp[str[i]]++;
    
    for(auto x : mp)
    cout<<x.first<<" "<<x.second<<endl;
    
    
}
int main()
{
    system("cls");

    string str = "abcdefghijklmnopqrstuvwxyzabcdgrtskhdighfrytamjdy";
    findFrequency(str);
    return 0;
}