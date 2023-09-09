#include<bits/stdc++.h>
using namespace std;
int findMinimumElementsToBeRemoved(vector<int> &vec, int B)
{
    sort(vec.begin(), vec.end());
    for(auto it: vec)
    cout<<it<<" ";
    cout<<endl;
    int count =0;
    if(binary_search(vec.begin(), vec.end(), B))
    {
        for(int i= vec.size()-1;i>=0;i--)
        {
            if(vec[i] == B)
            return count;
            else count++;
        }
    }
    else return -1;
}
int main()
{
    system("cls");
    vector<int> vec = {24, 33, 13, 11, 30, 28, 19, 8, 30, 25, 42, 6, 30, 49, 3, 49, 24, 13, 3, 50};
    int B = 13;
    cout<<findMinimumElementsToBeRemoved(vec, B)<<endl;
    return 0;
}