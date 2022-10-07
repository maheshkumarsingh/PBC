#include<iostream>
using namespace std;
#include<vector>

template <class T>
void swapTheValues(vector<T> &firstName, vector<T> &lastName)
{
    firstName.swap(lastName);
}
int main()
{
    vector<string> FirstName = {"Mahesh","Shikha","Yuvraj","Amartya","Ganesh"};
    vector<string> LastName = {"Singh","Yadav","Gavit","Kaushik","Dhavale"};

    swapTheValues(FirstName, LastName);
    for (int i = 0; i < FirstName.size(); i++)
    {
        cout<<FirstName.at(i)<<endl;
    }
    cout<<endl;

    for (int i = 0; i < LastName.size(); i++)
    {
        cout<<LastName.at(i)<<endl;
    }
    
    return 0;
}