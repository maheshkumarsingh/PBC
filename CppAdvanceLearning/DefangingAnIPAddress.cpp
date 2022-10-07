#include<iostream>
#include<vector>
using namespace std;

string defangIPaddr(string ipAddress)
{
    for(int i=0; i< ipAddress.length();i++)
    if(ipAddress[i] == '.')
       ipAddress 
    return ipAddress;
}
int main()
{
    string ipAddress = "255.100.50.0";
    string result = defangIPaddr(ipAddress);
    cout<<result<<endl;
    return 0;
}