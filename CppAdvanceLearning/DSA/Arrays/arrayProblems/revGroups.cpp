// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseKElements(vector<long long>& arr, int s, int e)
    {
        for(int i=s;i<e/2;i++)
        {
            arr[i] = arr[i] +arr[e-1-i];
            arr[e-1-i] = arr[i]- arr[e-1-i];
            arr[i] = arr[i]- arr[e-1-i];
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int i=1;
        while(i<=n)
        {
            if((n-i-1)>k && (i-1)%k==0)
            {
                reverseKElements(arr, i, i+k-1);
            }else if((n-i)<k)
            reverseKElements(arr, i, n-1);
            i++;
        }
        
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends