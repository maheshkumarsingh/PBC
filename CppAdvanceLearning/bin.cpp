#include <bits/stdc++.h>
using namespace std;
void generateBinary(int n)
{
    string ans = "";

    while (n > 0)
    {
        ans += (char)((n & 1) + '0');
        n >>= 1;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
int Solve(int n, int B)
{
    int x = 0;
    while (x < B)
    {
        if ((n & (1 << x)) != 0)
        {
            n = n & (n - 1);
            // cout << n << " Inside " << x << endl;
        }
        x++;
        // cout << n << " " << x << endl;
        // cout<<"checking the value"<<(92 & (1<<3))<<endl;
    }
    return n;
}
int main()
{
    system("cls");
    int n, B;
    cin >> n >> B;
    // getDecimal(n);
    cout << Solve(n, B) << endl;
    cout << (~(1 << B) - 1) << endl;
    cout << (7 & 1) << endl;
    cout << (6 & 1) << endl;

    generateBinary(5);
    generateBinary(25);
    generateBinary(30);
    generateBinary(125);
    generateBinary(130);
    generateBinary(150);
    generateBinary(155);

    unsigned int ans = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (A & 1)
        {
            ans = ans | (1 << i);
        }
        A = A >> 1;
    }
    cout<<ans;
    return 0;
}