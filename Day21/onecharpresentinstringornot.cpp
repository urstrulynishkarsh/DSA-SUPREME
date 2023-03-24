#include <iostream>
#include <climits>
#include <string.h>
using namespace std;
bool presentOrNot(string &str, char ch, int index)
{
    if (index >= str.length())
    {
        return false;
    }
    if (str[index] == ch)
    {
        return true;
    }
    return presentOrNot(str, ch, index + 1);
}

int main()
{
    string str;
    getline(cin, str);
    char ch = 's';
    int index = 0;
    cout << presentOrNot(str, ch, index);
}