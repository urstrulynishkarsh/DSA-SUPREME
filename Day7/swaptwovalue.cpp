#include <iostream>
using namespace std;
void swap1(int x, int y)
{
    cout << x << " " << y << endl;
    int temp;
    temp = x;
    x = y;
    y = temp;

    cout << x << " " << y << endl;
}
void swap2(int a, int b)
{
    cout << a << " " << b << endl;
    a = a - b;
    b = a + b;
    a = b - a;
    cout << a << " " << b << endl;
}

void swap3(int a, int b)
{
    cout << a << " " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << " " << b << endl;
}
int main()
{
    int a = 5;
    int b = 6;
    swap1(a, b);
    swap2(a, b);
    swap3(a, b);
}