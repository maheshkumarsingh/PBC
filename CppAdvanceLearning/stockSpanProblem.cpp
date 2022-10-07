#include <bits/stdc++.h>
using namespace std;

vector<int> calculateLifeSpanMethod1(int arr[], int n)
{
    vector<int> ans;
    ans.push_back(1);
    for (int i = 1; i < n; i++)
    {
        int count = 0;
        for (int j = i; j >= 0; j--)
            if (arr[i] >= arr[j])
                count++;
        ans.push_back(count);
    }
    return ans;
}
vector<int> calculateLifeSpanMethod2(int arr[], int n)
{
    vector<int> ans;
    stack<int> st;
    st.push(0);
    ans.push_back(1);
    for (int i = 1; i < n; i++)
    {
        // if (arr[st.top()] >= arr[i])
        // {
        //     ans.push_back(i-st.top());
        //     st.push(i);
        //     //cout<<"Hii"<<(i-st.top())<<"  "<<st.top()<<"   "<<*(ans.end()-1)<<endl;
        // }
        // else
        // {
            //cout<<arr[i]<<endl;
            while(st.empty()==false && arr[i]>=arr[st.top()])
            {
                //cout<<arr[st.top()]<<endl;
                st.pop();
                //cout<<arr[st.top()]<<"   "<<"InsideWhile"<<endl;
            }
            st.empty()==true?ans.push_back(i+1):ans.push_back(i-st.top());
            st.push(i);
            //cout<<"Hello"<<"  "<<st.top()<<"   "<<*(ans.end()-1)<<endl;
        //}
    }
    return ans;
}

int main()
{
    system("cls");
    int arr[] = {15, 13, 12, 14, 16, 8, 6, 4, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    //cout<<n<<endl;
    // int arr[]= {40,30,20,10};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> ans = calculateLifeSpanMethod1(arr, n);
    for (int x : ans)
        cout << x << " ";
    cout << endl<<endl<<endl;
    vector<int> ans1 = calculateLifeSpanMethod2(arr, n);
    //cout<<ans.size()<<endl;
    for (int x : ans1)
        cout << x << " ";
    cout << endl;
    return 0;
}