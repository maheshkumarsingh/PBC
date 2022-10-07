#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string str)
    {
        reverse(str.begin(), str.end());
        int i = 0, j = 0;
        while (i < str.length())
        {
            if (str[i] == '.')
            {
                reverse(str.begin() + j, str.begin() + i);
                i++;
                j = i;
            }
            i++;
        }
        reverse(str.begin() + j, str.end());
       //cout<<str<<endl;
       return str;
    }
};

int main()
{
    system("cls");
    string str = "i.like.this.program.very.much.pqr.mno";
    string str1= "rqp.onm";
    cout << str << endl;
    cout << str1 << endl;
    Solution sol;
    cout<<sol.reverseWords(str)<<endl;
    cout<<sol.reverseWords(str1)<<endl;
    // reverse(str.begin(), str.end());
    // int i = 0, j = 0;
    // while (i < str.length())
    // {
    //     if (str[i] == '.')
    //     {
    //         reverse(str.begin() + j, str.begin() + i);
    //         i++;
    //         j = i;
    //     }

    //     i++;
    // }
    // cout << str << endl;
    return 0;
}