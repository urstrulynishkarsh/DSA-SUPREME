#include <iostream>
using namespace std;
int max(int a, int b)
{
    if (a > b)
    {
        return a;
        // cout << a << " is maximum than " << b << endl;
    }
    else
    {
        return b;
        // cout << b << " is maximum than " << a << endl;
    }
}
int main()
{
    int a = 5;
    int b = 2;
    cout << max(a, b);
}
