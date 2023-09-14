#include <iostream>
using namespace std;
class student
{
protected:
    int roll_num;

public:
    void setroll(int);
    void getroll();
};
void student::setroll(int r)
{
    roll_num = r;
}
void student::getroll()
{
    cout << "the roll number is " << roll_num << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam ::get_marks()
{
    cout << "the marks obtined in math are: " << maths << endl;
    cout << "the marks obtined in physics are: " << physics << endl;
}
class result : public exam
{
    float percentage;

public:
    void display_result()
    {
        getroll();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{

    result harsh;
    harsh.setroll(118);
    harsh.set_marks(99.00, 98.0);
    harsh.display_result();

    return 0;
}