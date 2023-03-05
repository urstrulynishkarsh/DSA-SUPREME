#include <iostream>
#include <string.h>
using namespace std;
bool checkpalindrome(string str, int i, int j)
{
    while (i <= j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
bool validPalindromeII(string str)
{
    int i = 0;
    int j = str.size() - 1;
    while (i <= j)
    {
        if (str[i] != str[j])
        {
            return (checkpalindrome(str, i + 1, j) || checkpalindrome(str, i, j - 1));
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    string str;
    cout << "Enter your string: ";
    getline(cin, str);
    cout << validPalindromeII(str);
}