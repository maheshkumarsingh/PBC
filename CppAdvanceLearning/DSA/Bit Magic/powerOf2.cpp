#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    while (n != 1)
    {
        if (n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
}
bool isPowerOfTwoByBrian(int n)
{
    if (n == 0)
        return false;
    return ((n & (n - 1)) == 0);
}
bool isPowerOfTwoByBrianShort(int n)
{
    return (n!=0 && (n & (n-1)) ==0);
}
int main()
{
    system("cls");
    /*method 1 */
    int n;
    cin >> n;
    cout << isPowerOfTwo(n) << endl;
    // method 2 Brian Kerningams method power of 2 has only one set bit
    cout << isPowerOfTwoByBrian(n) << endl;
    cout<<isPowerOfTwoByBrianShort(n)<<endl;
    return 0;
}