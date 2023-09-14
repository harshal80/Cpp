#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
/*
    The useful for working with files in c++ are:
    1. fstreambase
    2. fstream-->derived from fstreambase
    3. ofstream-->derived from fstreambase
*/

// In order work with files in c++, you will have to open it,. primarily, there are 2 ways to
//  1. using the constructor
//  2. using the member function open() of the class
int main()
{

    string st = "harshal bhai";
    string st2;
    // opening files using constructor and writing it
    // ofstream out("sample.txt"); // write operation
    // out << st;

    // opening files using constructor and reading it
    ifstream in("sample.txt");
    // in >> st2;
    getline(in, st2);
    cout << st2;

    return 0;
}