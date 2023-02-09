#include <iostream>
using namespace std;
int main()
{
    bool a = true;
    bool b = false;

    cout << "a & b is: " << (a & b) << endl;
    cout << "a | b is: " << (a | b) << endl;
    cout << "~a and ~b are: " << ~(a) << " and " << (~b) << endl;
    cout << "a^b is: " << (a ^ b) << endl;
    cout << "2 & 3 is: " << (2 & 3) << endl;
}