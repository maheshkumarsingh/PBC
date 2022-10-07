#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    set<int> se = {1,2,4,5,6,7,8};
    cout<<(*(se.upper_bound(8)))<<endl;
    cout<<(*(se.lower_bound(8)))<<endl;
    multiset<int> ms(se.begin(), se.end());
   
    return 0;
}