#include <iostream>
using namespace std;
int main()
{
    int km;
    cout << "Enter the kilometer: ";
    cin >> km;
    float miles = (1 / 1.609) * km;
    cout << "value in miles is: " << miles;
}