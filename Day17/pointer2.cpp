#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    cout << "value of a is: " << a << endl;
    cout << "value of p is: " << p << endl;
    cout << "address of a is: " << &a << endl;
    cout << "address of p is: " << &p << endl;
    cout << "value of *p is: " << *p << endl;
}