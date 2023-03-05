#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;
    cout << "length is: " << str.length() << endl;
    cout << "isEMpty : " << str.empty() << endl;
    str.push_back('a');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;
    cout << str.substr(1, 4);
    string a = "nishkarsh";
    string b = "nishkarsh";
    if ((a).compare(b) == 0)
    {
        cout << "string are equal";
    }
    else
    {
        cout << "string are not equal";
    }
}
