#include <bits/stdc++.h>
using namespace std;
void printElement(int a1[], int a2[], int n1, int n2)
{
    map<int, int> mp;
    for (int i = 0; i < n1; i++)
        mp[a1[i]]++;
    
    for (int i = 0; i < n2; i++)
    {
        auto it = mp.find(a2[i]);
        if(it!=mp.end())
        {
            while((it->second)--)
            cout<<it->first<<" ";
            mp.erase(it);
        }
    }
    
   for (auto it = mp.begin();it!= mp.end();it++)
   {
      while(it->second--)
      cout<<it->first<<" ";
   }
   
}
using namespace std;
int main()
{
    system("cls");
    // int a1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    // int n1 = sizeof(a1) / sizeof(a1[0]);
    // int a2[] = {2, 1, 8, 3};
    // int n2 = sizeof(a2) / sizeof(a2[0]);
    int a1[] = {2, 1,2,5,7,1,9,3,6,8,8};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int a2[] = {1,10,11};
    int n2 = sizeof(a2) / sizeof(a2[0]);
    printElement(a1, a2, n1, n2);
    return 0;
}