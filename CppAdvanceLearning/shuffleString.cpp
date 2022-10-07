#include<iostream>
#include<vector>
using namespace std;

string restoreString(string str, vector<int> indices)
{
    string str1 = str;
    if(str.length() != indices.size())
    return NULL;
    else
    {
       for (int i = 0; i < str.length(); i++)
       {
           str[indices[i]] = str1[i];
       }
       return str;
       
    }

}
int main()
{
    string str = "codeleet";
    vector<int> indices = {4,5,6,7,0,2,1,3};
    string result = restoreString(str, indices);
    cout<<result<<endl;
    return 0;
}