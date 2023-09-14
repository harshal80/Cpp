#include <iostream>
using namespace std;

class complex;
class addition
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumcomplex(complex, complex);
    int sumcomplex2(complex, complex);
};
class complex
{
    int a, b;
    // Individually declaring function as frinds
    // friend int addition ::sumcomplex(complex o1, complex o2);
    // friend int addition ::sumcomplex2(complex o1, complex o2);

    // Aliter Declaring the entire addition class as friends
    friend class addition;

public:
    void setdata(int a1, int a2)
    {
        a = a1;
        b = a2;
    }
    void print()
    {
        cout << "the addition of" << a << " + " << b << endl;
    }
};

int addition::sumcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int addition::sumcomplex2(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setdata(1, 4);
    o2.setdata(5, 7);
    addition calc;
    int res = calc.sumcomplex(o1, o2);
    cout << "The sum of real part o o1 and o2 is " << res << endl;
    int ress = calc.sumcomplex2(o1, o2);
    cout << "The sum of real part o o1 and o2 is " << ress << endl;
    return 0;
}