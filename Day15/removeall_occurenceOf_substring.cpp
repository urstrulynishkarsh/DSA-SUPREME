#include <iostream>
#include <string.h>
using namespace std;
string removeAllSubstring(string str, string sub)
{
    int pos = str.find(sub);
    while (pos != string::npos)
    {
        str.erase(pos, sub.length());
        pos = str.find(sub);
    }
    return str;
}
int main()
{
    string str;
    cout << "Enter your string: ";
    getline(cin, str);
    string sub;
    cout << "Enter your substring: ";
    getline(cin, sub);
    cout << removeAllSubstring(str, sub);
}