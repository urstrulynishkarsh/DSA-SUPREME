#include <iostream>
// #include <string.h>
#include <cstring>
using namespace std;
int main()
{
    char ch[] = "nishkarsh";
    // int arr[] = {1, 2, 3};
    // cout << sizeof(arr) << endl;
    memset(ch, 't', sizeof(ch));
    cout << sizeof(ch) - 1;
    // cout << endl;
    cout << ch;
}