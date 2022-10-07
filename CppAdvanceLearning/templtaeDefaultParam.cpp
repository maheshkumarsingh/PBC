#include<iostream>
using namespace std;

template <class T1= int , class T2=string, class T3=char>

class myClass
{
    private:
    T1 data1;
    T2 data2;
    T3 data3;

    public:
    myClass(T1 data1, T2 data2 , T3 data3)
    {
        this->data1 = data1;
        this->data2 = data2;
        this->data3 = data3;
    }

    void display()
    {
        cout<<data1<<" "<<data2<<" "<<data3<<endl;
    }
};


int main()
{
    myClass<> obj(1, "Mahesh",'M');
    obj.display();
    myClass<string, float, double> obj2("Mahesh",41.2,55.555);
    obj2.display();
    return 0;
}