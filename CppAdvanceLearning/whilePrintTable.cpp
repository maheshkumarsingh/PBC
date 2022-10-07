#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void printTable(int n)
    {
        int multiplier = 10;
        while(multiplier)
        {
            cout<<n*(multiplier--)<<" ";
        }
    }
};
int main()
{
    system("cls");
    Solution *obj = new Solution();
    obj->printTable(2);
    return 0;
}