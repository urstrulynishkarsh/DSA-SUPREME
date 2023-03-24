#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int power2(int base, int n)
{
    if (n != 0)
    {
        int ans = base * power2(base, n - 1);
        return ans;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << power2(2, n);
}