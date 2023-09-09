#include<bits/stdc++.h>
using namespace std;
void generateBinaryUsingQueue(int n)
{
    queue<string> que;
    que.push("1");
    for (size_t i = 0; i < n; i++)
    {
        string curr = que.front();
        cout<<curr<<" ";
        que.pop();
        que.push(curr + "0");
        que.push(curr + "1");
    }
    cout<<endl;
}
int main()
{
    system("cls");
    int n;
    cin>>n;
    generateBinaryUsingQueue(n);
    return 0;
}