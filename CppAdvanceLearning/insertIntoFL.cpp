#include<bits/stdc++.h>
using namespace std;

forward_list<int> insertIntoFl(int arrr[], int n)
{
    forward_list<int> fl ;
    for (int i = 0; i < n; i++)
    {
        fl.push_front(arrr[i]);
    }
    return fl;
}
int main()
{
    system("cls");
    int arr[]= {1,2,3,4,5};
    forward_list<int> fl = insertIntoFl(arr,5);
    for(auto x: fl)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}