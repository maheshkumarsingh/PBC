#include<bits/stdc++.h>
using namespace std;
void eqPoint(int arr[],int n)
{
    //Your code here
    int prev=1,next =1;
    int i=1;
    int j=n;
    cout<<"\n";
    while(i!=n && j!=0)
    {
        prev *= arr[i-1];
        next *= arr[j-1];
        cout<<i<<"  "<<j<<"   "<<prev<<" "<<next<<endl;
        
        i++;
        j--;
    }
    if(prev==next)
    cout<<j+1<<"."<<i-1<<endl;
    else
    cout<<"-1"<<endl;
}
int main()
{
    system("cls");
    int arr[] = {2,4,2,2,2};
    int arr1[] = {1,2,3,3,2,1};

    eqPoint(arr1,6);
    return 0;
}