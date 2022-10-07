#include <bits/stdc++.h>
using namespace std;
double getNthTermOfGP(int A, int B, int N)
{
    if (N == 1)
        return A;
    else if (N == 2)
        return B;
    else
    {
        double r = B / (A*1.0);
        double ans =  (A * pow(r, N - 1));
        cout<<r<<setw(3)<<ans<<endl;
        return ans;
    }
}
int main()
{
    system("cls");
    int A, B, N;
    cin >> A >> B >> N;

    cout << floor(getNthTermOfGP(A, B, N)) << endl;
    return 0;
}