#include <iostream>
using namespace std;
int main()
{
    char ch[10] = "sherbano";
    char *c = &ch[0];
    cout << ch << endl;        // sherbano
    cout << ch[0] << endl;     // s
    cout << ch[1] << endl;     // h
    cout << &ch << endl;       // address of ch
    cout << *(ch + 3) << endl; // r
    cout << c << endl;         // sherbano
    cout << *c << endl;        // s
    cout << &c << endl;        // address of c
    cout << *(c + 3) << endl;  // r
    cout << c + 2 << endl;     // erbano
    cout << c + 8 << endl;     // empty
}