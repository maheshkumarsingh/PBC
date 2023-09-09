#include <bits/stdc++.h>
using namespace std;

int josephusIndex(int n, int k)
{
    list<int> l;
    for (size_t i = 0; i < n; i++)
    {
        l.push_back(i);
    }

    auto itr = l.begin();
    while (l.size() > 1)
    {
        for (size_t count = 1; count < k; count++)
        {
            itr++;
            if (itr == l.end())
                itr = l.begin();
        }
        cout << *itr << endl;
        itr = l.erase(itr);
        if (itr == l.end())
            itr = l.begin();
    }
    return *(l.begin());
}
int main()
{
    system("cls");
    int n, k;
    cin >> n >> k;

    cout << josephusIndex(n, k);
    return 0;
}