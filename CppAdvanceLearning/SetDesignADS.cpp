#include<bits/stdc++.h>
#include<set>
using namespace std;

bool search(set<int> &se, int x)
{
    return (se.find(x)!= se.end());
}
void Adelete(set<int> &se, int x)
{
    se.erase(x);
}

int getFloor(set<int> &se, int x)
{
    auto it = se.lower_bound(x);
    if(x<((*(se.begin()))))
    return INT_MIN;
    else if(!search(se, x))
    it--;
    return *it;
}

int getCeiling(set<int> &se, int x)
{
    auto it = se.upper_bound(x);
    if(x> (*(se.rbegin())))
    return INT_MAX;
    else if(search(se, x))
    it--;
    return *it;
}
int main()
{
    system("cls");
    set<int> se;
    se.insert(10);
    se.insert(20);
    se.insert(15);
    se.insert(5);
    se.insert(25);
    for(auto x:se)
    cout<<x<<"  ";
    cout<<endl;
    bool ans = search(se, 15);
    cout<<(bool)ans<<endl;
    Adelete(se, 15);
    ans = search(se, 15);
    cout<<(bool)ans<<endl;

    int x = getFloor(se, 6);
    cout<<x<<endl;
    x = getFloor(se, 5);
    cout<<x<<endl;
    x = getCeiling(se, 6);
    cout<<x<<endl;
    x = getCeiling(se, 25);
    cout<<x<<endl;
    x = getCeiling(se, 100);
    cout<<x<<endl;
    x = getFloor(se, 1);
    cout<<x<<endl;      
    return 0;
}