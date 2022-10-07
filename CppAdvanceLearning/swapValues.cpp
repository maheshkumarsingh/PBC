#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
   void swap_the_values(int *A, int *B)
   {
       *A = *A+*B;
       *B = *A - *B;
       *A = *A - *B;
   }

   void swap_the_values(int &A, int &B)
   {
    //   A = A+B;
    //   B=A-B;
    //   A=A-B;
        swap(A,B);
   }
};
int main()
{
    system("cls");
    Solution sol;
    int a =5,b=6;
    cout<<"Before swap : "<<a<<" "<<b<<endl;
    sol.swap_the_values(a,b);
    cout<<"after refrence swap sol.swap(a,b) "<<a<<" "<<b<<endl;
    sol.swap_the_values(&a, &b);
    cout<<"after refrence swap sol.swap(&a,&b) "<<a<<" "<<b<<endl;
    return 0;
}