#include <iostream>
using namespace std;
template <class t>
class vecttor
{
public:
    t *arr;
    int size;
    vecttor(int m)
    {
        size = m;
        arr = new t[size];
    }
    t dotproduct(vecttor &v)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{

    vecttor<int> v1(3); // veector 1 with a float data type
    v1.arr[0] = 1;
    v1.arr[2] = 5;
    v1.arr[3] = 7;
    vecttor<int> v2(3); // vector 2 with a float data type
    v2.arr[0] = 2;
    v2.arr[1] = 3;
    v2.arr[2] = 4;
    int a = v1.dotproduct(v2);
    cout << a << endl;

    return 0;
}