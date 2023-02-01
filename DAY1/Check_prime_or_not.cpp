#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int i = 2;
    if (number == 2)
    {
        cout << "It is a prime number";
    }
    while (i < number)
    {
        if (number % i == 0)
        {
            cout << "It is not a prime number";
            break;
        }
        else
        {
            if (i == (number - 1))
            {

                cout << "It is a prime number";
            }
            i++;
        }
    }
}