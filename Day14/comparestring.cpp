#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s1;
    cout << "Enter the first String: ";
    getline(cin, s1);
    string s2;
    cout << "Enter the first String: ";
    getline(cin, s2);
    cout << s1.find(s2) << endl;
    if (s1.compare(s2) == 0)
    {
        cout << "string are equal:";
    }
    else
    {
        cout << "string are not equal:";
    }
}