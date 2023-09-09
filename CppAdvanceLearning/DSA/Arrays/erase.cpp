#include<bits/stdc++.h>
using namespace std;
vector<int> list_less_than_k(vector<int> &a,int k)
{
    // Your code here
    //Return a vector with elements less than k
    for(auto itr = a.begin(); itr!= a.end();itr++)
    {
        if((*itr)>=k)
        a.erase(itr);
    }
    return a;
}
int main()
{
    system("cls");
    vector<int> vec = {6,5,2,3,1,3,4};
    vector<int> ans = list_less_than_k(vec, 4);
    for(auto it : ans)
    cout<<it<<" ";
    return 0;
}