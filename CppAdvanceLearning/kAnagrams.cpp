#include<bits/stdc++.h>
using namespace std;

bool findAnagram(string str1, string str2, int k)
{
    if(str1.length() != str2.length())
    return false;
    else
    {
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        int count=0;
        for (int i = 0; i < str1.length(); i++)
        {
            if(str1[i]!=str2[i])
             count++;
        }
        if(count>k)
        return false;
        else
        return true;      
    }
}
int main()
{
    system("cls");
    string str1= "fodr";
    string str2= "gork";
    int k=2;
    bool answer = findAnagram(str1, str2, k);
    cout<<(bool)answer<<endl;
    return 0;
}