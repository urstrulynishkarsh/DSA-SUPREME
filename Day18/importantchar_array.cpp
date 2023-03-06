#include <iostream>
using namespace std;
int main()
{
    char ch = 'k';
    char *p = &ch;
    cout << ch << endl;
    cout << &ch << endl;
    // cout << ch[0] << endl;
    cout << *p << endl;
    cout << p << endl;
    cout << &p << endl;
}