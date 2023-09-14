#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // connecting our file with hout stream
    ofstream file("sample.txt");

    // creating a name string and filling it with the string entered by the user
    string name;
    cout << "enter your name :";
    cin >> name;

    // writing a string to the file
    file << name + " is my name";
    file.close();

    ifstream hin("sample.txt");
    string content;
    hin >> content;
    cout << "the content of this file is:" << content;
    hin.close();

    return 0;
}