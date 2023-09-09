#include<bits/stdc++.h>
using namespace std;

int main()
{
   system("cls");
   int A, B, C;
   cin>>A>>B>>C;
   int smallest, middle, largest;
   if(A<=B && A<=C)
   {
    smallest = A;
    middle = min(B,C);
    largest = max(B,C);
   }
   else if(B<=A && B<=C)
   {
    smallest = B;
    middle = min(A,C);
    largest = max(A,C);
   }
   else
   {
    smallest = C;
    middle = min(A,B);
    largest = max(A,B);
   }
   cout<< smallest*10000 + middle *100 + largest<<endl;
   return 0;
}