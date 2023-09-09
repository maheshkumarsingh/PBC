#include<bits/stdc++.h>
using namespace std;
bool hasLoop(Node* head) {
    Node* temp = head;
    set<Node*> hashSet;
    while (temp != null) 
    {
        if (hashSet.find(temp) != hashSet.end()) {
            return true;
        }
        hashSet[temp]++;
        temp = temp->next;
    }
    return false;
}
int main()
{
   system("cls");
   
   
   return 0;
}