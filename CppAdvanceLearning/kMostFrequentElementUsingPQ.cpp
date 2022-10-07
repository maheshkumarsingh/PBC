

// C++ program to find the k-most frequent number.
#include <bits/stdc++.h>
using namespace std;

// Compare method to arrange the priority_queue
// according to the frequency or lesser value
// in case the frequency of two pair matches.
struct compare {
    bool operator()(pair<int, int> p1,
                    pair<int, int> p2)
    {
        // if the frequency matches
        // return the lesser value
        if (p1.second == p2.second)
            return p1.first > p2.first;
        else
            return p1.second < p2.second;
    }
};

// Method to find the k-most frequent number
void k_most_frequent(int arr[], int n, int k)
{
    // Create an unordered_map
    unordered_map<int, int> mp;

    // Store the numbers
    // and frequency of occurrence
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // Creating the vector pairs
    vector<pair<int, int> > freq(mp.begin(),
                                 mp.end());

    // priority_queue storing the vector pairs
    // on the basis of frequency
    priority_queue<pair<int, int>,
                   vector<pair<int, int> >, compare>
        pq(freq.begin(), freq.end());
    // Popping k-times to get the
    // k-most frequent numbers
    for (int i = 0; i < k; i++) {

        // Displaying the first element of
        // the pair corresponding to the most
        // frequently appeared element
        cout << pq.top().first << " ";
        pq.pop();
    }
}

// Driver Method
int main()
{
    // Base array
    int arr[] = { 3, 1, 4, 4, 5, 2, 6, 1 };

    // Value of k and n
    int k = 2, n = 8;

    // Calling the k_most_frequent method
    k_most_frequent(arr, 8, 2);
    return 0;
}
