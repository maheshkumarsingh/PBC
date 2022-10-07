#include<bits/stdc++.h>
using namespace std;
long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>> pq(arr, arr+n);
        long long sum =0;
        while(--n)
        {
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            long long preSum = first + second;
            cout<<first<<"  "<<second<<endl;
            pq.push(preSum);
            sum+= preSum;
            cout<<preSum<<"  "<<sum<<endl;
        }
        return sum;
    }
int main()
{
    system("cls");
    long long arr[] = {4, 2, 7, 6, 9};
    long long n = sizeof(arr)/sizeof(arr[0]);
    long long sum = minCost(arr, n);
    cout<<sum<<endl;
    return 0;
}