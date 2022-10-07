//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y)
    {
        // code here
        int countX = 0;
        int countY = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]== x)
            countX++;
            else if(arr[i]== y)
            countY++;
        }
        //int ans = (x < y ? countX : countY);
        if(countX== countY)
        return (x < y ? countX : countY);
        else
        return countX>countY ? countX : countY;
    }
};

//{ Driver Code Starts.
int main()
{
    system("cls");

    int n;      // Size of array
    cin >> n;   // Input the size
    int arr[n]; // Declaring array of size n
    for (int i = 0; i < n;
         i++) // Running a loop to input all elements of arr
        cin >> arr[i];

    int x, y;      // declare x and y
    cin >> x >> y; // input x and y
    Solution obj;
    cout << obj.majorityWins(arr, n, x, y)
         << endl; // calling the function that you complete
    return 0;
}
// } Driver Code Ends