#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int arr[] ={10,20,30};
    vector<int> vec;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"start"<<endl;
    cout<<accumulate(arr, arr+n,0)<<endl;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        vec.push_back(arr[i]);
    }

    sort(vec.begin(), vec.end(), greater<int>());
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;
    reverse(vec.begin(),vec.end());
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout<<sum<<endl;
    return 0;
}