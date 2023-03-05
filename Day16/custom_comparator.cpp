#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
bool comp(char first, char second)
{
    return first > second;
}

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    sort(str.begin(), str.end());
    cout << "sorted string in ascending order is: " << str << endl;
    sort(str.begin(), str.end(), comp);
    cout << "sorted string in descending order is: " << str << endl;
}