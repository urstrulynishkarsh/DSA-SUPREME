#include <iostream>
using namespace std;
int main()
{

    // implicit conversion
    char ch = 65;
    cout << "value of ch is: " << ch << endl;

    int num = 'b';
    cout << "value of num is: " << num << endl;

    // explicit conversion

    float a = (float)2;
    cout << "value of a is: " << a << endl;

    double d = 5.7;
    int x = (float)d + 2;
    cout << "value of x is: " << x << endl;
}