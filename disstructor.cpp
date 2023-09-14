#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;

        cout << "this is the time when constructor is called for object number " << count << endl;
    }
    ~num()
    {
        count++;
        cout << "this is the time when constructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{

    num n1;

    return 0;
}