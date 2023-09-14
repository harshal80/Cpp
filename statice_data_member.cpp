#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is " << id << " and yhis is employee number " << count << endl;
    }
    static void getcount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};
int employee::count;
int main()
{
    employee harsh, ram, sham;
    harsh.setdata();
    harsh.getdata();
    employee::getcount();

    ram.setdata();
    ram.getdata();
    employee::getcount();

    sham.setdata();
    sham.getcount();
    employee::getcount();

    return 0;
}