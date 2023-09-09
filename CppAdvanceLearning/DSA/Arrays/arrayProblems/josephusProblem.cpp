#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin >> n;
    int closestPwerof2 = (int)(log2(n));
    int ans = (n - pow(2, closestPwerof2)) * 2 + 1;
    cout<<ans<<endl;
    vector<int>nums = {1,1,2,3,3,3,4,5,5,6,7,7};
    set<int> mp;
        for(int i=0;i<nums.size();i++)
        if(mp.find(nums[i])==mp.end())
        mp.insert(nums[i]);

        cout<< mp.size()<<endl; 
    return 0;
}