#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};
class test : virtual public student
{
protected:
    int maths, physics;

public:
    void set_marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "your result is here: " << endl
             << "maths: " << maths << endl
             << "physics: " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};
class result : public test, public sports
{
private:
    int total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};
int main()
{
    result harsh;
    harsh.set_number(118);
    harsh.set_marks(99, 80);
    harsh.set_score(6);
    harsh.display();
    return 0;
}