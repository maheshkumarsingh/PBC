#include<iostream>
#include<vector>
using namespace std;

int finalValueAfterOperations(vector<string> &operations)
{
    int X=0;
    for(auto op : operations)
    (op == "++X" || op== "X++") ? ++X : --X;
    return X;
    
}
int main()
{
    vector<string> operations = {"++X","++X","X++"};
    int result = finalValueAfterOperations(operations);
    cout<<result<<endl;
    return 0;
}