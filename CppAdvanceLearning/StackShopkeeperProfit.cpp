#include<bits/stdc++.h>
using namespace std;

int shopkeeperProfit(vector<int> vec)
{
    stack<int> st;
    int profit =0;
    for (int i = vec.size()-1; i >=0; i--)
    {
        //cout<<vec[i]<<endl;
        while(!st.empty() && vec[i]>=st.top())
        st.pop();
        if(st.empty())
        {
            profit+= vec[i];
            //cout<<profit<<vec[i]<<endl;
            st.push(vec[i]);
        }
        else{
            profit+= st.top() - vec[i];
            st.push(vec[i]);
        }
    }
    return profit;
    
}
int main()
{
    system("cls");
    //vector<int> vec = {5,4,6,2,1};
    vector<int> vec = {1,2,3,4};
    cout<<shopkeeperProfit(vec)<<endl;

    return 0;
}