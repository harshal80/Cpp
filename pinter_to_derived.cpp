#include <iostream>
using namespace std;
class baseclass
{
public:
    int var_base;
    void display()
    {
        cout << "displying base class varible var_base " << var_base << endl;
    }
};
class derivedclass : public baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "dispalying base class varible var_base " << var_base << endl;
        cout << "dispalying derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derive class
    // base_class_pointer->var_derived=132; //will throw an error
    base_class_pointer->var_base = 3300;
    base_class_pointer->display();

    derivedclass *derivedclass_pointer;
    derivedclass_pointer = &obj_derived;
    derivedclass_pointer->var_base = 8888;
    derivedclass_pointer->var_derived = 99;
    derivedclass_pointer->display();

    return 0;
}