#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
   void swapElements(int arr[], int size)
   {
      cout<<"Before swap:"<<endl;
      for (int i = 0; i < size; i++)
      cout<<arr[i]<<" ";
      cout<<endl;

      for(int i=0;i<size-2;i++)
      {
          swap(arr[i],arr[i+2]);
      }
      cout<<"After swap"<<endl;
      for (int i = 0; i < size; i++)
      cout<<arr[i]<<" ";
      cout<<endl;
   }
};
int main()
{
    system("cls");
    int arr[]= {1,2,3,4,5};
    Solution sol;
    sol.swapElements(arr,5);
    return 0;
}