#include <iostream>
using namespace std;
void solve(int *p)

{
    *p = *p + 10;
}
int main()
{
    int n = 10;
    int *ptr = &n;
    cout << n << endl;
    solve(ptr);
    cout << n;
}