#include <iostream>
using namespace std;
int addTwoNumber(int x, int y);
int main()
{
    int a = 5;
    int b = 7;
    int sum = addTwoNumber(a, b);
    cout << sum << endl;
}
int addTwoNumber(int x, int y)
{
    int result = x + y;
    return result;
}