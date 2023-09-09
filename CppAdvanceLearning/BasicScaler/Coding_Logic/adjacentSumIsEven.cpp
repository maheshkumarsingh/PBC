#include<bits/stdc++.h>
using namespace std;
int getAdjacentSumEven(vector<int> vec)
{
    int size = vec.size();
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i+1; i < size; j++)
        {
            if((vec.at(i) + vec.at(j))%2!=0)
            vec.erase(vec.begin() + j);
        }
         
    }
    
}
int main()
{
    system("cls");
    vector<int> vec = {1,2,3,4,5};
    cout<<getAdjacentSumEven(vec);
    return 0;
}