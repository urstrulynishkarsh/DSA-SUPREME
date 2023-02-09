#include <iostream>
using namespace std;
int main()
{
    int val;
    cout << "Enter the val: ";
    cin >> val;

    switch (val)
    {
    case 1:
        cout << "nishkarsh";
        break;
    case 2:
        cout << "ritik";
        break;
        // continue;
    case 3:
        cout << "pintu";
        break;
    case 4:
        cout << "nitya";
        break;
    default:
        cout << "aryan";
    }
}