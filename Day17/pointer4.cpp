#include <iostream>
using namespace std;
int main()
{
    int *ptr; // bad practice and give garbage value
    cout << *ptr << endl;
    // it is good practice to create null pointer
    // int *p = 0;
    int *p = nullptr;
    cout << ptr;
}