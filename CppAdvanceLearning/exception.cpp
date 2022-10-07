#include<bits/stdc++.h>
using namespace std;

class MyException: public exception
{
     virtual const char *what() const throw()
     {
         return "Exception Occurred!!!!!";
     }
};
int main()
{
    system("cls");
    try
    {
        throw MyException();
    }
    catch(exception& e)
    {
        cerr<< e.what() << '\n';
    }
    
    return 0;
}