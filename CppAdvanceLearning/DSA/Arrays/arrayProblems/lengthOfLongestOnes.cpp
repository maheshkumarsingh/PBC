#include <bits/stdc++.h>
using namespace std;
int solve(string A)
{
    int onesCount = 0;
    for (int i = 0; i < A.length(); i++)
        if (A[i] == '1')
            onesCount++;
    int i = 0;
    while (A[i] == '0')
        i++;
    if (i == A.length() - 1)
        return 0;
    int leftOnes = 0, rightOnes = 0;
    while (A[i] == '1')
        rightOnes++, i++;
    if (rightOnes == onesCount)
        return rightOnes;
    int maxLen = 0;
    for (; i < A.length(); i++)
    {
        if (A[i] == '0')
        {
            leftOnes = rightOnes;
            rightOnes = 0;
            for (int j = i + 1; j < A.length(); j++)
            {
                if (A[j] == '1')
                    rightOnes++;
                else
                {
                    i = j - 1;
                    break;
                }
            }
        }
        if (leftOnes + rightOnes < onesCount && maxLen < leftOnes + rightOnes + 1)
            maxLen = leftOnes + rightOnes + 1;
        else if (leftOnes + rightOnes == onesCount)
            return leftOnes + rightOnes;
    }
    return maxLen;
}
int main()
{
    system("cls");

    return 0;
}