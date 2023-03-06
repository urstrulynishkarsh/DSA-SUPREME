#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << "value of a is: " << a << endl;
    cout << "address of a is: " << &a << endl;
    cout << "value of ptr is: " << ptr << endl;
    cout << "value of *ptr is: " << *ptr << endl;
    cout << "address of &ptr is: " << &ptr << endl;
    cout << "value of *ptr*2 is: " << *ptr * 2 << endl;
    cout << "value of (*ptr)++ is: " << (*ptr)++ << endl;
    cout << "value of ++(*ptr) is: " << ++(*ptr) << endl;
}