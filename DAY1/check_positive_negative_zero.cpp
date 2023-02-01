#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    if (number > 0)
    {
        cout << number << " number is positive";
    }
    else if (number < 0)
    {
        cout << number << " number is negative";
    }
    else
    {
        cout << number << " number is zero";
    }
}