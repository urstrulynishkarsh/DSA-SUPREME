#include <iostream>
#include <string.h>
using namespace std;
void permutation(string &str, int i)
{
    if (i >= str.length())
    {
        cout << str << " ";
        return;
    }
    for (int j = i; j < str.length(); j++)
    {
        // swapping
        swap(str[i], str[j]);
        // recursive call
        permutation(str, i + 1);
        // swap again because we are working on same string
        swap(str[i], str[j]);
    }
}
int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int i = 0;
    permutation(str, i);
}