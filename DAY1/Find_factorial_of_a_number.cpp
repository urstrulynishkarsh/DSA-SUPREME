#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int i = 1;
    int fact = 1;
    while (i <= number)
    {
        fact *= i;
        i++;
    }
    cout << "factorial of " << number << " is: " << fact << endl;
}
