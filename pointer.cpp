#include <iostream>
using namespace std;

int main()
{

    int a = 20;
    int *ptr = &a;
    cout << &a << endl;
    cout << &ptr << endl;
    cout << *ptr;

    return 0;
}