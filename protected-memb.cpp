#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;
};
class drived : protected base
{
};

int main()
{
    base b;
    drived d;

    return 0;
}