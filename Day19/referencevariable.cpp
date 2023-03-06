#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int &b = a;
    a++;
    b++;
    cout << a << endl;
    cout << b << endl;
    cout << &a << endl;
    cout << &b << endl;
}