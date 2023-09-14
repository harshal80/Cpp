#include <iostream>
#include <string.h>
using namespace std;
struct employe
{
    int id;
    char name[20];
    int marks;

} emp;

int main()
{
    emp.id = 118;
    strcpy(emp.name, "harshal");
    emp.marks = 99;
    cout << emp.id << endl;
    cout << emp.name << endl;
    cout << emp.marks << endl;

    return 0;
}