#include <bits/stdc++.h>
using namespace std;
unsigned int getPostOfRightMostBit(int m, int n)
{
    if (m == 0 && n == 0)
        return 0;
    int x1 = 0, x2 = 0, ans = 0;
    while (m != 0 && n != 0)
    {
        m & 1 == 1 ? x1 = 1 : x1 = 0;
        n & 1 == 1 ? x2 = 1 : x2 = 0;
        cout << m << setw(2) << n << setw(2) << x1 << setw(2) << x2 << endl;
        if (x1 ^ x2 != 0)
            return ++ans;
        else
            ans++;
        m = m >> 1;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    system("cls");
    int m, n;
    cin >> m >> n;
    unsigned int ans = getPostOfRightMostBit(m, n);
    cout << ans << endl;
    return 0;
}