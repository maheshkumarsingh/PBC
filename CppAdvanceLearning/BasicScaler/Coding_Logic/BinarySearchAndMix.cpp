#include<bits/stdc++.h>
using namespace std;

int search_index(vector<int> &A, int start, int end, int element)
{
    while(start<=end)
    {
        int mid = (start + end)/2;
        if(A[mid] == element)
        return mid;
        if(A[mid]<element)
        start = mid+1;
        else
        end = mid -1;
    }
    return min(start, end);
}
vector<int> findNumberOfToyBuy(vector<int> &A, vector<int> &B)
{
    int sum=0;
    for (int i = 0; i < A.size(); i++)
    {
        sum += A[i];
        A[i] = sum;
    }

    vector<int> ans;

    for(auto it : B)
    {
        int result = search_index(A,0,A.size()-1,it);
        ans.push_back(result+1);
    }
    return ans;
}
int main()
{
    system("cls");
    vector<int> A = {3,4,4,6,5,6,4,3,89};
    for(auto it: A)
    cout<<it<<" ";
    cout<<endl;
    vector<int> B = {20,4,10,2};
    for(auto it: B)
    cout<<it<<" ";
    cout<<endl;
    vector<int> ans = findNumberOfToyBuy(A, B);
    for(auto it: ans)
    cout<<it<<" ";
    cout<<endl;
    if(binary_search(A.begin(), A.end(),2))
    cout<<"Yes";
    else cout<<"NO"<<endl;
    sort(A.begin(), A.end());
    for(auto it: A)
    cout<<it<<" ";
    cout<<endl;
    return 0;
}