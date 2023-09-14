#include <iostream>
using namespace std;
/*
case1:
class b:public a {
    // order of execution of constructore->first a() then b()
};
case2:
class A:public B,public C{
    // order of execution of constructor ->B() then C() and A()
};
case3:
class A:public B,virtual public C{
    // order of execution of constructor ->C() then B() and A()
};
*/
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 class constructor called" << endl;
    }
    void print_database1()
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 class constructor called" << endl;
    }
    void print_database2()
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};
class derived : public base2, public base1
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base2(b), base1(a)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor called" << endl;
    }
    void print_dataderived()
    {
        cout << "the value of derived1 is " << derived1 << endl;
        cout << "the value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    derived harsh(2, 4, 1, 9);
    harsh.print_database1();
    harsh.print_database2();
    harsh.print_dataderived();
    return 0;
}