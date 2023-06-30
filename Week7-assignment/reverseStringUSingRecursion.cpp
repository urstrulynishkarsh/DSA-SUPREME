#include <iostream>
#include <cstring>
using namespace std;
void lastOccurence(string &str, int s, int e)
{
    if (s > e)
    {
        return;
    }
    swap(str[s], str[e]);
    lastOccurence(str, s + 1, e - 1);
}
int main()
{
    string str;
    cin >> str;

    int s = 0;
    int e = str.length() - 1;
    lastOccurence(str, s, e);
    cout << str;
}