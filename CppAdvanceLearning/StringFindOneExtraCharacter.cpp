#include<bits/stdc++.h>
using namespace std;
char findOneExtraCharacter(string &text, string &toFind)
{
    int sum1=0;
    for(auto x: text)
    sum1+= (int)x;

    int sum2=0;
    for(auto x: toFind)
    sum2+= (int)x;
    cout<<(char)(sum2-sum1)<<endl;
    char ans = (char)(sum2-sum1);
	return ans;
}
int main()
{
    system("cls");
    string text = "abacac";
    string toFind = "baaabcc";
    char ans = findOneExtraCharacter(text, toFind);
    cout<<ans<<endl;
    return 0;
}

/*#include <iostream>
using namespace std;

char findExtraCharcter(string strA, string strB)
{
	// result store the result
	int res = 0,i;

	// traverse string A till end and
	// xor with res
	for (i = 0; i < strA.length(); i++) {

		// xor with res
        cout<<res<<endl;
		res ^= strA[i];
	}

	// traverse string B till end and
	// xor with res
	for (i = 0; i < strB.length(); i++) {

		// xor with res
		res ^= strB[i];
	}

	// print result at the end
	return ((char)(res));
}

int main()
{
	// given string
	string strA = "abcd";
	string strB = "cbdad";
	cout << findExtraCharcter(strA, strB);
	return 0;
}
*/

