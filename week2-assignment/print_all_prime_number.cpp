#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n)
{
    int i = 2;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        bool prime = isPrime(n);
        if (prime)
        {
            cout << i << " ";
        }
    }
}