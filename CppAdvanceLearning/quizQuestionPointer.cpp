#include <bits/stdc++.h>
using namespace std;

char* fun()
{
    static char arr[1024];
    cout<<"arr value "<<*arr<<" address : "<<&arr<<endl;

    return arr;
}
int main()

{
    char *str = "geeksforgeeks";
    cout<<"char *str : "<<str<<endl;
    strcpy(fun(), str);
    cout<<"strcpy(fun(), str) : str value: "<<str<<" address : "<<&str<<endl;


    str = fun();
    cout<<"str = fun() :"<<str<<endl;
    strcpy(str, "geeksquiz");
    cout<<"strcpy(str, \"geeksquiz\");"<<str<<" address : "<<&str<<endl;
    cout << fun();
    return 0;
}