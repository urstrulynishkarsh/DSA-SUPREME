#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            ans++;
        }
        n >>= 1;
    }
    cout << ans << endl;
}