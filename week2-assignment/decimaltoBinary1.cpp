#include <iostream>
#include <math.h>
using namespace std;
int decimalToBinary(int n)
{
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        ans = bit * pow(10, i++) + ans;
        n /= 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    cout << "binary is: " << decimalToBinary(n);
}