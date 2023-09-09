#include<bits/stdc++.h>
using namespace std;

vector<char> splitTheStringIntoCharArray(const string& question)
{
    vector<char> answer;
    for(auto ch: question)
    {
        if(isalnum(ch) || isspace(ch))
        answer.push_back(ch);
        else
        cout<<ch<<"is not alphaNumeric"<<endl;
    }
    
    return answer;
}
int main()
{
    system("cls");
    string question = "How are you &%$#@doing";
    vector<char> answer = splitTheStringIntoCharArray(question);
    for(auto it : answer)
    cout<<it<<" ";
    cout<<endl;

    char ch[20] = "Mahesh Kumar Singh";
    return 0;
}

