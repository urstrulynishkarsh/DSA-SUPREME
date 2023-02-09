#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << a++ << endl;
    a++;
    cout << "a++ is: " << a << endl;
    int x = a++;
    cout << "value of x is: " << x << endl;
    cout << "value of a is: " << a << endl;

    x = ++a;
    cout << "value of x is: " << x << endl;
    cout << "value of a is: " << a << endl;

    int c = 5;
    c++;
    cout << c << endl;
    cout << c++ << endl;
    cout << ++c << endl;

    int d = 6;
    // int y = ++d + 1; =8
    int y = (d++) + 1;
    //    int y = d++ + 1; =7
    cout << y << endl;

    int p = 3;
    int q = 4;
    int r = (--p) * (q++);
    cout << r << endl;

    int h = 5;
    cout << (++h) * (++h) << endl;
}