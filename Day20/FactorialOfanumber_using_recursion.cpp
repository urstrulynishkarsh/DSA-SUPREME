#include <iostream>
using namespace std;
int printFactorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int factorial = n * printFactorial(n - 1);
    return factorial;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << printFactorial(n);
}