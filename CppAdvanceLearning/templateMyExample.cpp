#include <iostream>
using namespace std;

template <class T1, class T2, class T3, class T4>

class myClass
{
    T1 id;
    T2 name;
    T3 salary;
    T4 designation;

public:
    // myClass(T1 id , T2 name){
    //     this->id = id;
    //     this->name = name;
    // }

    myClass(T1 id, T2 name, T3 salary, T4 designation)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
        this->designation = designation;
    }

    void display()
    {
        cout << "My id is " << id << " and my name is " << name << " I earn Rs. " << salary
             << " and my designation is " << designation << endl;
    }
};

int main()
{
    myClass<int, string, double, string> obj(1, "Mahesh Singh", 26200, "Program");
    obj.display();
}