#include<bits/stdc++.h>
using namespace std;
void convertDecimalToBinary(int n)
{
    string ans ="";
    while(n)
    {
        ans += to_string(n%2);
        n=n>>1;
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
}
int main()
{
    system("cls");
    int n;
    cin>>n;
    cout<<n<<endl;
    convertDecimalToBinary(n);
    n = n<<1;
    cout<<n<<endl;
    convertDecimalToBinary(n);
    n = n >> 1;
    cout<<n<<endl;
    convertDecimalToBinary(n);
    n = n & (n<<1);
    convertDecimalToBinary(n);
    return 0;
}