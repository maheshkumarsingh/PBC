#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> names = {"Mahesh","Shikha","Yuvraj","Amartya"};
    
    for(int i=0; i<names.size();i++)
    cout<<names[i]<<endl;
    //names.assign(5,"Singh");
    for(int i=0; i<names.size();i++)
    cout<<names.at(i)<<endl;

    names.push_back("Hiiii");
    int n= names.size();

    cout<<names[n-1]<<endl;

    names.pop_back();

    names.insert(names.begin(), "Names here");

    for(int i=0; i<names.size();i++)
    cout<<names[i]<<endl;

    names.erase(names.end());

    for(int i=0; i<names.size();i++)
    cout<<names[i]<<endl;

    names.emplace(names.end(),"Amartya");
    cout<<names[names.size()-1]<<endl;

    vector<string> names2 = {"GFG","Hackerrank","LeetCode","CodingNinja","HackerEarth"};

    names2.swap(names);
    cout<<endl;
    for(int i=0; i<names.size();i++)
    cout<<names[i]<<endl;
    cout<<endl<<endl;
    for(int i=0; i<names2.size();i++)
    cout<<names2[i]<<endl; 
    
    return 0;
}