#include <iostream>
using namespace std;
long long Factorial(int num)
{
    long long fact = 1;
    for (int i = num; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << num << " factorial is: " << Factorial(num);
}