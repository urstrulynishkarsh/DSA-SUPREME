#include <iostream>
using namespace std;
void solve(int **q)
{
    // *q = *q + 1;
    **q = **q + 1;
}
int main()
{
    int a = 5;
    int *p = &a;
    int **q = &p;
    solve(q);
    cout << a;
}