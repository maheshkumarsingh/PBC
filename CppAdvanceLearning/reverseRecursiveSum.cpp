#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findReverseRecursiveSum(int n)
    {
        // competitive programming
        if (n <= 9)
            return n;
        int sum = n % 10 + findReverseRecursiveSum(n / 10);
        return findReverseRecursiveSum(sum);
        // normal solution
        // int num = n;
        // int rem = 0;
        // int sum = 0;
        // while (num)
        // {
        //     rem = num % 10;
        //     sum += rem;
        //     num /= 10;
        // }

        // if (sum <= 9)
        //     return sum;
        // else
        //     findReverseRecursiveSum(sum);

    }
};

int main()
{
    int n = 45;
    Solution *solu = new Solution();
    cout << solu->findReverseRecursiveSum(n) << endl;
    system("cls");
    return 0;
}

// 99999 9+9+9+9+9 = 45 and 45 4+5 =9