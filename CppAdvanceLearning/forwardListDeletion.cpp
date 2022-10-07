#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    forward_list<int> li = {1,2,3,4,5};
    li.erase_after(li.begin(), li.end());
    li.clear();
    return 0;
}