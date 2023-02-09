#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    cout << (a << 2);
    cout << endl;
    cout << (a << 3) << endl;
    cout << (a << -1) << endl; // it will give garbarge value

    int b = 5;
    cout << (b >> 2) << endl;
    int c = 30;
    cout << (c >> 4);
}