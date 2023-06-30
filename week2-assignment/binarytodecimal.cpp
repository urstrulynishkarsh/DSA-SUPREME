#include <iostream>
#include <cmath>
using namespace std;
int BinaryToDecimal(int n)
{
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 10;
        ans = bit * pow(2, i++) + ans;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the Binary Number: ";
    cin >> n;
    cout << "Decimal: " << BinaryToDecimal(n);
}