#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int *p = arr;
    int *q = arr + 1;
    cout << arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << arr[0] << endl;
    cout << *p << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << q << endl;
    cout << *q << endl;
    cout << &q << endl;
    cout << *p + 1 << endl;
    cout << *p + 2 << endl;
    cout << *q + 3 << endl;
    cout << *(q + 4) << endl;

    cout << sizeof(arr) << endl;
    cout << sizeof(p) << endl;
}