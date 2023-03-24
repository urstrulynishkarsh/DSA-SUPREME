#include <iostream>
using namespace std;
int climb(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    int ans = climb(n - 1) + climb(n - 2);
    return ans;
}
int main()
{
    int n = 10;

    int ans = climb(n);
    cout << "answer is: " << ans << endl;
}