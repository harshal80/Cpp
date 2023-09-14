#include <iostream>
using namespace std;
// base class
class employee
{
public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    employee() {}
};
// Derived class syntax
/*
Class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class memebers/methods/etc...
}
Note:
1. Defult visiblity mode is private
2. public visibility mode: Publice members of the base class becomes Public members of the derived class
3. public visibility mode: Publice members of the base class becomes Public private of the derived class
4. private members are never inherited
*/
class programmer : public employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{

    employee harsh(1), yog(2);
    cout << harsh.salary << endl;
    cout << yog.salary << endl;
    programmer skillf(10);
    cout << skillf.languagecode << endl;
    cout << skillf.id << endl;
    skillf.getdata();
    return 0;
}