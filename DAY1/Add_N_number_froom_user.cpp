#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int i = 1;
    int sum = 0;
    while (i <= number)
    {
        sum += i;
        i++;
    }
    cout << sum << endl;
}