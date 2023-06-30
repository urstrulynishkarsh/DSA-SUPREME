#include <iostream>
#include <cmath>
using namespace std;
int decimalToBinary(int n)
{
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        ans = bit * pow(10, i++) + ans;
        n >>= 1;
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