#include <iostream>
using namespace std;
void sum(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int num;
    int num2;
    cout << "enter the firt number:";
    cin >> num;
    cout << "enter the secod number:";
    cin >> num2;
    sum(&num, &num2);
    cout << num << endl
         << num2;
    return 0;
}