#include<bits/stdc++.h>
using namespace std;

pair<int, int> getTwoOddAppearingNumber(int *arr, int n)
{
    int XOR =0;
    pair<int, int> p ;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR ^ arr[i];
    }
    int Sn = XOR & ~(XOR-1);  //to get rightmost set bit
    for (size_t i = 0; i < n; i++)
    {
        if((arr[i] & Sn)!=0)
        p.first = p.first ^ arr[i];
        else
        p.second = p.second ^ arr[i];
    }
    return p;
}
int main()
{
    system("cls");
    int arr[] = {3,4,3,4,8,4,4,32,7,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    pair<int, int> p = getTwoOddAppearingNumber(arr, n);
    cout<<p.first<<"  "<<p.second<<endl;
    return 0;
}