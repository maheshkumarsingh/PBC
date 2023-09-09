#include<bits/stdc++.h>
using namespace std;

vector<int> findHowMany(vector<int> &A, vector<int> &B)
{
    for(int i=1;i<A.size();i++)
    A[i] += A[i-1];
    for(auto it : A)
    cout<<it<<" ";
    cout<<endl;
    for(auto &it : B)
    it = upper_bound(A.begin(), A.end(),it) - A.begin();

    return B;
}
int main()
{
    system("cls");
    vector<int> A = {3,4,4,7};
    for(auto it : A)
    cout<<it<<" ";
    cout<<endl;
    vector<int> B = {20,4,10,2};
    for(auto it : B)
    cout<<it<<" ";
    cout<<endl;
    vector<int> ans = findHowMany(A,B);
    for(auto it : ans)
    cout<<it<<" ";
    cout<<endl;
    return 0;
}