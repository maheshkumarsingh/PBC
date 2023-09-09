#include <bits/stdc++.h>
using namespace std;

vector<int> factorial(int n)
{
    vector<int> ans;
    ans.push_back(1);

    for (int x = 2; x <= n; x++)
    {
        int carry = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            int val = ans[i] * x + carry;
            ans[i] = val%10;
            carry = val/10;
        }
        while(carry)
        {
            ans.push_back(carry%10);
            carry= carry/10;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    system("cls");
    int n;
    cin >> n;
    vector<int> ans = factorial(n);
    for (auto &it : ans)
        cout << it;
    cout<<endl<<ans.size();
    
    return 0;
}