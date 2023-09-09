#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &A)
{
    int n = A.size();
    vector<int> pfeven(n); // create even prefixsum array of length n
    vector<int> pfodd(n);  // create odd prefixsum array of length n

    pfeven[0] = A[0]; // construct even prefixsum array
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            pfeven[i] = pfeven[i - 1] + A[i];
        }
        else
        {
            pfeven[i] = pfeven[i - 1];
        }
    }

    pfodd[0] = 0; // construct odd prefixsum array
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            pfodd[i] = pfodd[i - 1] + A[i];
        }
        else
        {
            pfodd[i] = pfodd[i - 1];
        }
    }

    // specialINDEX -----> sum of even-index elements == sum of odd-index elements ; return count of specialINDEX

    int se = 0;    // initialise sumeven
    int so = 0;    // initialise sumodd
    int count = 0; // initialise count

    /*
    formula used,
    l r
    Se = psEven[i-1] + psOdd[n-1] - preOdd[i]
    l r
    So = psOdd[i-1] + psEven[n-1] - psEven[i]

    */

    for (int i = 0; i < n; i++)
    {
        se = pfodd[n - 1] - pfodd[i];
        if (i != 0)
        {
            se += pfeven[i - 1];
        }

        so = pfeven[n - 1] - pfeven[i];
        if (i != 0)
        {
            so += pfodd[i - 1];
        }

        if (so == se)
        {
            count++;
        }
    }

    return count;
}
int main()
{
    return 0;
}