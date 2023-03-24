#include <iostream>
using namespace std;
void solve(int n)
{
    if (n == 0)
    {
        return;
    }
    solve(n - 1);
    cout << n << " ";
    solve(n - 1);
}
int main()
{
    int n;
    cout << "Enter the  number: ";
    cin >> n;
    solve(n);
}