// #include<bits/stdc++.h>
// using namespace std;

// int minSumInVertivalRange(int arr[] , int n)
// {
//      for (int i = 0; i < n; i++)
//      {
//         /* code */
//      }
     
// }
// int main()
// {
//     int arr[][3] ={1,2,3,4,5,6,7,8,9};
//     int  n = sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < 3; i++)
//     {
//         int sum =0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum+= arr[j][i];
//         }
//         cout<<sum<<endl;
        
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> vec;
    vector<int> myVec;
    int n,m,k;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>m;
        for (int j = 0; j < m; j++)
        {
            cin>>k;
            myVec.push_back(k);
        }
        vec.push_back(myVec);
    }
    return 0;
}