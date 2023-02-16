#include <iostream>
using namespace std;
bool even(int n)
{
    if ((n & 1) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    bool isEven = even(n);
    if (isEven)
    {
        cout << "Number is even";
    }
    else
    {
        cout << "Number is odd";
    }
}