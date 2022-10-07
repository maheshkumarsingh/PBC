#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> vec = {4, 3, 5, 2, 6};
    // auto it = vec.begin();
    // int maxi = *it;
    int maxi = vec.at(0);
    //
    
    
    
    
    
    cout<<maxi<<endl;
    vector<int> ans;
    for (int i = 1; i < vec.size(); i++) // 4 ,3 ,5 ,2 ,6
    {
        //cout << maxi << endl;
        if (vec.at(i) > maxi)
            ans.push_back(i);
        maxi = max(maxi, vec.at(i));
    }
    //cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
    return 0;
}