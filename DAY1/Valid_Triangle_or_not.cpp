#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the first side of triangle: ";
    cin >> a;
    cout << "Enter the Second side of triangle: ";
    cin >> b;
    cout << "Enter the third side of triangle: ";
    cin >> c;
    if ((a + b) > c || (b + c) > a || (c + a) > b)
    {
        cout << "It is a valid triangle";
    }
    else
    {
        cout << "It is not a valid triangle";
    }
}