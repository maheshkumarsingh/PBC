#include <iostream>
using namespace std;

template <class T>
class Vector
{
public:
    T *arr;
    int size;

    Vector(int size)
    {
        this->size = size;
        arr = new T[size];
    }

    T dotProduct(Vector &vec)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
            sum += this->arr[i] * vec.arr[i];

        return sum;
    }
};
int main()
{
    Vector <float>v1(3);
    v1.arr[0]= 1.5;
    v1.arr[1]= 2.3;
    v1.arr[2]= 3.4;
    Vector <float>v2(3);
    v2.arr[0]= 1.3;
    v2.arr[1]= 3.2;
    v2.arr[2]= 4.4;
    float sum = v1.dotProduct(v2);
    cout<<sum<<endl;
    return 0;
}