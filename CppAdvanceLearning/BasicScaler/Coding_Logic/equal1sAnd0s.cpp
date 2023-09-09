#include <bits/stdc++.h>
using namespace std;

int findSubstringOfEqual0sAnd1s(string str)
{
    vector<string> ans;
    int count0 = 0;
    int count1 = 0;
    int j = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
            count0++;
        else
            count1++;
        if (count0 == count1)
        {
            //cout<<str.substr(j,i)<<endl;
            ans.push_back(str.substr(j,i));
            j=i;
        }
    }
    return ans.size();
}
int findSubstringOfEqual0sAnd1s2ndApproach(const string &str)
{
    long ans=0;
    long sum =0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if(str[i] == '0')
        sum++;
        else
        sum--;

        if(sum==0)
        ans++;
    }
    return ans;
}
int main()
{
    system("cls");
    string str;
    getline(cin, str);
    int ans = findSubstringOfEqual0sAnd1s(str);
    cout<<ans<<endl;
    ans = findSubstringOfEqual0sAnd1s2ndApproach(str);
    cout<<ans<<endl;
    return 0;
}