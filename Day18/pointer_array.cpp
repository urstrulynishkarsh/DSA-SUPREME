#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1};
    cout << arr[0] << endl;  // 1
    cout << arr[1] << endl;  // 0
    cout << arr[9] << endl;  // 0
    cout << arr[10] << endl; // garbage value because outside of the array element access

    int *p = arr;
    // all output shows base address of array element
    cout << arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << p << endl;

    // all output different in pointer

    cout << *p << endl;
    cout << &p << endl;
    cout << p << endl;
    cout << (*p) * 10 << endl;
}