#include <iostream>
using namespace std;
class y;
class x
{
    int data1;
    friend void swap(x &, y &);

public:
    void setdata(int a1)
    {
        data1 = a1;
    }
    void display()
    {

        cout << data1 << endl;
    }
};
class y
{
    int data2;
    friend void swap(x &, y &);

public:
    void setdata(int a2)
    {
        data2 = a2;
    }
    void display()
    {

        cout << data2 << endl;
    }
};
void swap(x &a1, y &a2)
{
    int temp;
    temp = a1.data1;
    a1.data1 = a2.data2;
    a2.data2 = temp;
}
int main()
{
    x a;
    y b;
    a.setdata(22);
    b.setdata(44);
    swap(a, b);
    cout << "after swaping a value" << endl;
    a.display();
    b.display();

    return 0;
}