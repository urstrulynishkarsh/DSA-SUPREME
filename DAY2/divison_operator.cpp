#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 3;
    cout << a / b << endl;
    // when integer divide by integer then we will get integer

    float f = 10.02;
    int i = 2;
    cout << f / i << endl;
    // when float divide by integer then we will get float

    double j = 10.2333;
    int k = 2;
    cout << j / k << endl;
    // when double divide by integer then we will get double

    float num = 10.2324;
    float number = 2.334;
    cout << num / number << endl;
    // when float divide by float then we will get float

    cout << a / f << endl;
    // when int divide by float then we will get float

    cout << f / j << endl;
    // when float divide by double then we will get double

    cout << j / f << endl;
    // when double divide by float then we will get double
}
