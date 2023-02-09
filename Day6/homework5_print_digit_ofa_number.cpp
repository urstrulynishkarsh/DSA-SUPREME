#include <iostream>
using namespace std;
void printDigit(int n)
{
    int ans;
    int digit = 0;
    while (n != 0)
    {
        ans = n % 10;
        cout << ans << endl;
        n /= 10;
    }
}
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    printDigit(n);
}