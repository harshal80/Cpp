#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    //

    complex(int x, int y); // parameterized Constructor
    complex(int c);

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
complex ::complex(int c)
{
    a = c;
}
int main()
{

    complex a(4, 6);
    complex b(8, 1);
    complex c(7);
    a.printNumber();
    b.printNumber();
    c.printNumber();

    return 0;
}
