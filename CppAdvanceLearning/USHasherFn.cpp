// CPP program to illustrate the
// unordered_set::hash() function

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    system("cls");
	unordered_set<string> myset;
    unordered_set<string>:: hasher fn = myset.hash_function();
    cout<<fn("geeks"); 
	return 0;
}
