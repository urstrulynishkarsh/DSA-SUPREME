#include <iostream>
using namespace std;
int main()
{
    char ch[10] = "nishkarsh";
    cout << ch << endl;
    char *c = ch;
    cout << c << endl;
    cout << *c << endl;
    cout << &c << endl;
}