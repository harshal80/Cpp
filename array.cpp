#include <iostream>
using namespace std;

int main()
{

    int arr[20] = {1, 2, 3, 4, 5, 6, 7};
    cout << arr[2];
    for (int i = 0; i < 7; i++)
    {
        cout << i << "\t" << arr[i] << endl;
    }
    // int *ptr = arr;
    // cout << *ptr << endl;
    // cout << *(ptr + 1) << endl;
    // cout << *(ptr + 2) << endl;
    // cout << *(ptr + 3) << endl;
    // cout << *(ptr + 4) << endl;

    return 0;
}