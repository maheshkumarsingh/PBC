#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}
vector<int> getPrimeAtPrimeIndex(vector<int> vec)
{
    vector<int> ans;
    for (int i = 1; i <= vec.size(); i++)
    {
        int val = vec[i - 1];
        if (isPrime(i) && isPrime(val))
            ans.push_back(val);
    }
    return ans;
}
int main()
{
    system("cls");
    vector<int> vec;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        vec.push_back(m);
    }

    vector<int> result = getPrimeAtPrimeIndex(vec);
    for (auto x : result)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}