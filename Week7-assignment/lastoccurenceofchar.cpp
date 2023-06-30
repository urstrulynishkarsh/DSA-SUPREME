#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
// int lastOccurence(string &str, char &ch)
// {
//     int ans = -1;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ch)
//         {
//             ans = i;
//         }
//     }
//     return ans;
// }
int lastOccurence(string &str, char &ch)
{
    int ans = -1;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] == ch)
        {
            ans = i;
            break;
        }
    }
    return ans;
}
int main()
{
    string str;
    cout << "enter the string: ";
    getline(cin, str);
    char ch;
    cout << "Enter the char you want to search for last occurence: ";
    cin >> ch;
    cout << lastOccurence(str, ch);
}