#include <iostream>
using namespace std;
long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << factorial(n);
}