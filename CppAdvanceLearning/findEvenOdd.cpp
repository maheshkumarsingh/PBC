#include<bits/stdc++.h>
using namespace std;
class Solution
{
   public:
   void countEvenOdd(int arr[], int size)
   {
       int even=0, odd=0;
       for (int i = 0; i < size; i++)
          (arr[i]%2==0) ? ++even : ++odd;
       cout<<even<<" "<<odd;
   }
};
int main()
{
    system("cls");
    Solution sol;
    int arr[]={1,2,3,4,5,6,7,8,9};
    sol.countEvenOdd(arr, 9);
    return 0;
}