#include <iostream>
using namespace std;
class base1
{
public:
    virtual void print()
    {
        cout << "base1" << endl;
    }
};
class base2 : public base1
{
public:
    void print()
    {
        cout << "base2" << endl;
    }
};
class base3 : public base2
{
public:
    void print3()
    {
        cout << "base3" << endl;
    }
};
class derived : public base3
{
public:
    void print1()
    {
        cout << "derived";
    }
};
int main()
{
    derived d;
    d.print();
    return 0;
}
