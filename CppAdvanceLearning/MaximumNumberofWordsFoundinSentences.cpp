#include <iostream>
#include <vector>
#include <string>
using namespace std;

int MaximumNumberofWordsFoundinSentences(vector<string> &senetences)
{
    int max, ans=0;
    for (int i=0; i<senetences.size();i++)
    {
        max=0;
        for(int j=0; j< senetences.at(i).length();j++)
        {
            if(senetences.at(i)[j] == ' ')
             max++;
        }
        if(ans<max)
        ans = max;
    }
    return ans+1;
    
}
int main()
{
    vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};

    int result = MaximumNumberofWordsFoundinSentences(sentences);
    cout<<result<<endl;
    // vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    // int max = 0, ans = 0;
    // for (int i = 0; i<sentences.size(); i++)
    // {
    //     max=0;
    //     for (int j = 0; j < sentences.at(i).length(); j++)
    //     {
    //         cout<<sentences.at(i)[j];
    //         if (sentences.at(i)[j] == ' ')
    //         {
    //             cout<<"I am space!!"<<endl;
    //             max++;
    //         }
            
    //     }
    //     cout<<ans<<max<<endl;
    //     if (ans < max)
    //         ans = max;
    //         cout<<endl<<ans<<"line change"<<endl;
    // }
    // cout << ans+1 << endl;

    
    return 0;
}