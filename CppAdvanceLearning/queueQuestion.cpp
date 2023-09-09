#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cin>>n;
    
    //5 6 55 56 65 66 555 556 565 566..............
    //we will use queue here because We have to keep track of latest element in front
    //front of queue

    queue<string> que;
    que.push("5");
    que.push("6");
    for (size_t i = 0; i < n; i++)
    {
        string currentElement = que.front();
        cout<<currentElement<<" ";
        que.pop();
        que.push(currentElement + "5");
        que.push(currentElement + "6");
    }
    cout<<que.size()<<endl;
    return 0;
}