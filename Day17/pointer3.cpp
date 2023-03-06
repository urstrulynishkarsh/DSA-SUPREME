#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    char ch = 'c';
    double d = 1.03;
    int *ptr = &a;
    char *cptr = &ch;
    double *dptr = &d;
    // sizeof data types
    cout << "size of a is: " << sizeof(a) << endl;
    cout << "size of d is: " << sizeof(d) << endl;
    cout << "size of ch is: " << sizeof(ch) << endl;
    // size of pointers
    cout << endl;
    cout << "size of ptr is: " << sizeof(ptr) << endl;
    cout << "size of dptr is: " << sizeof(dptr) << endl;
    cout << "size of cptr is: " << sizeof(cptr) << endl;
}