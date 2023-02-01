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
    int avg = (a + b + c) / 3;
    cout << "Average of three numbers is " << avg << endl;
}