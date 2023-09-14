#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 0;
    }

    number(int x)
    {
        a = x;
    }
    number(number &z)
    {
        cout << "copy constructir called" << endl;
        a = z.a;
    }
    void display()
    {
        cout << "the number for object theis:" << a << endl;
    }
};

int main()
{

    number a1, b1, c1(5), z2;
    a1.display();
    b1.display();
    c1.display();
    number z1(c1);
    z1.display();
    z2 = c1;
    z2.display();
    return 0;
}