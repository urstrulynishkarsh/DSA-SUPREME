#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the First number: ";
    cin >> a;
    cout << "Enter the Second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "First number is maximum";
    }
    else if (b > a && b > c)
    {
        cout << "Second number is maximum";
    }
    else
    {
        cout << "Third number is maximum";
    }
}