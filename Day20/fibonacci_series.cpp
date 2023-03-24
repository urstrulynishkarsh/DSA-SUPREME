#include <iostream>
using namespace std;
int fibonacciSeries(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fibonacci = fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
    return fibonacci;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << fibonacciSeries(n);
}