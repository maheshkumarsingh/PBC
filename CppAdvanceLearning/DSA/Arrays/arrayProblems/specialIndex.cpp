#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &A)
{
    int n = A.size();
    int totalOdd = 0, totalEven = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            totalEven += A[i];
        else
            totalOdd += A[i];
    }
    int ans = 0, sE = 0, sO = 0;
    
    for (int i = 0; i < n; i++)
    {
        int rse = totalEven - sE;
        int rso = totalOdd - sO;
        if (i % 2 == 0)
            rse -= A[i];
        else
            rso -= A[i];
        // cout<<"evenSum + remaingOddSum : "<<(sE + rso)<<". OddSum + remaingEvenSum: "<<(sO + rse)<<". i: "<<i<<". A[i]:"<<A[i]<<endl;
        if ((sE + rso) == (sO + rse))
            ans++;
        if (i % 2 == 0)
            sE += A[i];
        else
            sO += A[i];
    }
    return ans;
}
int main()
{
    system("cls");
    vector<int> vec = {2, 1, 6, 4};
    cout << solve(vec) << endl;
    cout<<(1| 0|1)<<endl;

    cout<<(9^17)<<endl;
    int i=0;
    while(i<5) 
    cout<<i++<<endl;
    cout<<i<<endl;
    return 0;
}