#include <iostream>
using namespace std;
// void solve(int a)
// {
//     a = a + 1;
// }

void solve(int &a)
{
    a = a + 1;
}

int main()
{
    int a = 5;
    solve(a);
    cout << a;
}