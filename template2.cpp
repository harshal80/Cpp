#include <iostream>
using namespace std;
// class myclass
// {
// public:
//     int data1;
//     char data2;
//     void display()
//     {
//         cout << this->data1 << " " << this->data2;
//     }
// };
template <class t1, class t2>
class myclass
{
public:
    t1 data1;
    t2 data2;
    myclass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << " " << this->data2;
    }
};
int main()
{

    myclass<int, char> obj(1, 'c');
    obj.display();

    return 0;
}