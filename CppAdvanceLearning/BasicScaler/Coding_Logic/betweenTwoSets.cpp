#include<bits/stdc++.h>
using namespace std;
int getTotalX(const vector<int> &a,const vector<int> &b) {
    int count =0;
    for(int x = a[0];x<=b[b.size()-1];x++)
    {
        bool flagFirst = true, flagSecond = true;
        
        for(int j=0;j<a.size();j++) 
        if((x % a[j])!=0) flagFirst = false;
        
        if(flagFirst && flagSecond)
        {
            for(int k =0;k<b.size();k++)
            if((b[k]% x) !=0) flagSecond = false;
        }
        
        if(flagFirst && flagSecond)
        count++;
    }
    return count;
}
int main()
{
    system("cls");
    vector<int> a = {2,6};
    vector<int> b = {24,36};
    cout<<getTotalX(a,b)<<endl;
    return 0;
}