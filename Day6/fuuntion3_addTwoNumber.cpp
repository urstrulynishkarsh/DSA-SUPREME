#include <iostream>
using namespace std;
int addTwoNumber(int a, int b)
{
    cout << "address of A:" << &a << endl;
    cout << "address of B:" << &b << endl;
    return a + b;
}
int main()
{
    int a = 5;
    int b = 6;
    cout << "address of A:" << &a << endl;
    cout << "address of B:" << &b << endl;
    cout << "Add of Two Number is: " << addTwoNumber(a, b);
}