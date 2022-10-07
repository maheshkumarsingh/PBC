#include <bits/stdc++.h>
using namespace std;

void rotateByLeft(deque<int> &dq, int n, int k)
{
    // for (int i = 0; i < k; i++)  //3 4 5 6 1 2
    // {
    //     int n = dq.front();
    //     dq.pop_front();
    //     dq.push_back(n);
    // }
    rotate(dq.begin(), dq.begin()+k, dq.end());  // 3 4 5 6 1 2
}
void rotateByRight(deque<int> &dq, int n, int k)
{
    for (int i = n-1; i >=n- k; i--)  //5 6 1 2 3 4
    {
        int n = dq.back();
        dq.pop_back();
        dq.push_front(n);
    }
    //rotate(dq.begin(), dq.begin() + n -k, dq.end());  // 5 6 1 2 3 4 CORRECT
}
int main()
{
    system("cls");

    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int n;
        cin >> n;
        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            dq.push_back(val);
        }

        int rotateBy, k;
        cin >> rotateBy >> k;
        // rotate(dq.begin(), dq.begin()+k,dq.end());
        if (rotateBy == 1)
            rotateByRight(dq, n, k);
        else
            rotateByLeft(dq, n, k);
        for (auto it = dq.begin(); it != dq.end(); it++)
            cout << *it << " ";
        cout << endl;
        // rotate(dq.begin(), dq.begin()+dq.size()-k,dq.end());

        // for(auto x : dq)
        // cout<<x<<" ";
        // cout<<endl;
    }
    return 0;
}