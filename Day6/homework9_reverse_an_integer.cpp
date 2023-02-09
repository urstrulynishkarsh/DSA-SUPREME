#include <iostream>
using namespace std;
int reverse(int n)
{
    int rem;
    int reversed = 0;
    while (n != 0)
    {
        rem = n % 10;
        reversed = reversed * 10 + rem;
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