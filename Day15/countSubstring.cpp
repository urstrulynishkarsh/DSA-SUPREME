#include <iostream>
#include <string.h>
using namespace std;
int counter(string str, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < str.length() && str[i] == str[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}

int main()
{
    string str;
    cout << "Enter your string: ";
    getline(cin, str);
    int totalcount = 0;
    for (int center = 0; center < str.length(); center++)
    {
        int odd = counter(str, center, center);
        totalcount += odd;
        int even = counter(str, center, center + 1);
        totalcount += even;
    }
    cout << totalcount;
}
