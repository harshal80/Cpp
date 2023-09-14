#include <iostream>
using namespace std;
int fact(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}
int main()
{

    int num;
    cout << "enter the nubmber: ";
    cin >> num;
    cout << "the factorial of " << num << "=" << fact(num);

    return 0;
}