#include <iostream>
using namespace std;
int sum(int x, int y)
{
    return x + y;
}
int sum(int x, int y, int z)
{
    return x + y + z;
}
int main()
{

    cout << "the sum of " << sum(3, 2) << endl;
    cout << "the sum of " << sum(6, 8, 9);

    return 0;
}