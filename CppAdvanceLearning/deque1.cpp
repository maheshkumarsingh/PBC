#include <bits/stdc++.h>
using namespace std;

void deque_push_back(deque<int> &dq, int x)
{
}

void deque_push_front(deque<int> &dq, int x)
{
}
void deque_pop_back(deque<int> &dq)
{
}
int deque_front_element(deque<int> &dq)
{
}

void dequeAndArrayIn(int arr[], int n)
{
    // deque<int> dq;
    // for (int i = 0; i < n; i++)
    //     dq.push_back(arr[i]);
    // return dq;

    // 2nd way
    //deque<int> dq({arr, arr + n});
    // 3rd way
    deque<int> dq;
    dq.assign(arr, arr + n);
    dq.erase();
}
int main()
{
    deque<int> dq;
    system("cls");
    int queries;
    cin >> queries;

    while (queries--)
    {
        string str;
        cin >> str;
        if (str == "pb")
        {
            int x;
            cin >> x;
            deque_push_back(dq, x);
        }

        else if (str == "pf")
        {
            int x;
            cin >> x;
            deque_push_front(dq, x);
        }
        else if (str == "pp_b")
        {
            deque_pop_back(dq);
        }
        else if (str == "f")
        {
            int x = deque_front_element(dq);
            cout << x;
        }
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

        int n = sizeof(arr) / sizeof(arr[0]);

        dequeAndArrayIn(arr, n);
    }
    return 0;
}