#include <bits/stdc++.h>
using namespace std;
vector<string> splitString(string str, string del = " ")
{
    vector<string> ans;
    // split string " "   I am Mahesh Kumar Singh
    int start, end = -1 * del.size();
    do
    {
        start = end + del.size();
        end = str.find(del, start); // cout<<start<<"  "<<end<<endl;
        ans.push_back(str.substr(start, end - start));
    } while (end != string::npos);
    return ans;
}
int main()
{
    system("cls");
    string str;
    getline(cin, str);
    cout << str << endl;
    vector<string> splittedString = splitString(str); // printPalindromeInASentence

    for (auto &it : splittedString)
    {
        string temp = it;
        reverse(it.begin(), it.end());
        if (temp.compare(it)==0)
            cout << it << " is a Palindrome" << endl;
        else
            cout << it << " is NOT a Palindrome" << endl;
    }
    
    return 0;
}