#include <iostream>
using namespace std;
int maxOfThree(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > z && y > x)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int main()
{
    int a, b, c;
    cout << "Enter first Number: ";
    cin >> a;
    cout << "Enter second Number: ";
    cin >> b;
    cout << "Enter third Number: ";
    cin >> c;
    int max = maxOfThree(a, b, c);
    cout << max;
}