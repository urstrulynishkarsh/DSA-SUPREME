#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;
int cutintorod(int n, int x, int y, int z)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    int ans = max(cutintorod(n - x, x, y, z), max(cutintorod(n - y, x, y, z), cutintorod(n - z, x, y, z)));
    if (ans == -1)
    {
        return -1;
    }
    return ans + 1;
}
int main()
{
    int n = 5;
    int x = 2, y = 5, z = 1;
    cout << cutintorod(n, x, y, z);
}