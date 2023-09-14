#include <iostream>
using namespace std;
class test;

class student
{
    int roll_no;

public:
    student()
    {
        cout << "student setails" << endl;
    }
};

class test
{
    friend class student;

public:
    int roll_no;
    void setdata(int r)
    {
        roll_no = r;
    }

    void set()
    {
        cout << "roll number is: " << roll_no << endl;
    }
};

int main()
{
    student obj;
    test s1;
    s1.setdata(55);
    s1.set();
    return 0;
}