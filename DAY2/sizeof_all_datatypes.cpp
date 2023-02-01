#include <iostream>
using namespace std;
int main()
{
    int number = 65;
    cout << "size of int is: " << sizeof(number) << endl;

    char ch = 'a';
    cout << "size of char is: " << sizeof(ch) << endl;

    bool Naman = true;
    cout << "size of bool is: " << sizeof(Naman) << endl;

    short a = 2;
    cout << "size of short is: " << sizeof(a) << endl;

    long ritik = 2323;
    cout << "size of long is: " << sizeof(ritik) << endl;

    long long nitya = 3234323323;
    cout << "size of long long is: " << sizeof(nitya) << endl;

    string str = "Namstey Bharat";
    cout << "size of string is: " << sizeof(str) << endl;

    float num = 6.5;
    cout << "size of float is: " << sizeof(num) << endl;

    double para = 3.142332;
    cout << "size of para is: " << sizeof(para) << endl;
}