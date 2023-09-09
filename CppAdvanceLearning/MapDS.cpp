#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map<int, string> mp;

void add(int key, string value)
{
    mp.insert({key, value});
}
int main()
{
    system("cls");
    add(10, "abc");
    add(5, "xyz");
    add(100, "pqr");
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;

    if (mp.find(5) != mp.end())
        cout << (*mp.find(5)).second << endl;
    else
        cout << "NOT FOUND" << endl;

    auto it = mp.upper_bound(7);
    while (it != mp.end())
    {
        cout << (*it).first << " " << (*it).second << endl;
        it++;
    }

    map<int, int> ans;
    //ans.insert({3,10});
    //ans.insert({3,20});
    ans.insert({3,30});
    ans.insert({2,30});
    for(auto &it : ans)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}