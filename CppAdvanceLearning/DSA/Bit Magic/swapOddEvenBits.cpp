//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void convertDecimalToBinary(int n)
    {
        string ans = "";
        while (n)
        {
            ans += to_string(n % 2);
            n = n >> 1;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    unsigned int swapBits(unsigned int n)
    {
        unsigned int firstBit =0;
    	unsigned int secondBit =0;
    	string ans = "";
    	
    	for(int i=0;i<32;i++)
    	{
    	    firstBit = (n>>0) & 1;
    	    secondBit = (n>>1) & 1;
    	    ans = ans + to_string(secondBit) + to_string(firstBit);
    	    n = n>>2;
    	}
    	reverse(ans.begin(), ans.end());
    	unsigned int res = stoi(ans);
    	return res; 
    }
};


int main()
{
    system("cls");
    unsigned int n;
    cin >> n; // input n

    Solution ob;
    // calling swapBits() method
    ob.convertDecimalToBinary(n);
    int bits = (int)log2(n) + 1; 
    cout<<bits<<endl;
    cout << ob.swapBits(n) << endl;


    return 0;
}