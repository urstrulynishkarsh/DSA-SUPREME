#include <iostream>
#include <limits.h>
using namespace std;
int reverse(int n)
{
    if (n < INT_MIN)
    {
        return 0;
    }
    int reversed = 0;
    int remainder;
    while (n != 0)
    {
        if (reversed > INT_MAX / 10)
        {
            return 0;
        }
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return reversed;
}
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    cout << reverse(n);
}