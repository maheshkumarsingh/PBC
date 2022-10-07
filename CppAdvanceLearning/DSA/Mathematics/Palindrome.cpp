#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(long num)
{
    long temp =0;
    int rem =0;
    long n = num;
    int p =0;
    while(n!=0)
    {
        n/=10;
        ++p;
    }
    n = num;
    //cout<<p<<endl;
    p--;
    while(n!=0)
    {
        rem = n%10;
        long s = round(pow(10,p--));
        temp+= s*rem;
        //cout<<s<<" "<<temp<<" ";
        //p--;
        n/=10;
    }
    //cout<<endl;
    cout<<temp<<"    "<<num<<endl;
    if(temp == num)
    return true;
    else
    return false;
}
int main()
{
    system("cls");
    bool ans = checkPalindrome(12321);
    cout<<ans<<endl;
    return 0;
}