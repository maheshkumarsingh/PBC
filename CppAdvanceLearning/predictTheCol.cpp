#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int arr[3][3] = {{1, 0, 0}, {1, 0, 0}, {1, 0, 0}};

    int colNumAns = 0;
    int maxColZeroes = 0;
    for (int i = 0; i < 3; i++)
    {
        int colZeroes = 0;
        for (int j = 0; j < 3; j++)
            colZeroes += arr[j][i] == 0 ? 1 : 0;
        if (colZeroes > maxColZeroes)
        {
            maxColZeroes = colZeroes;
            colNumAns = i;
        }
    }
    cout << colNumAns << endl;

    return 0;
}