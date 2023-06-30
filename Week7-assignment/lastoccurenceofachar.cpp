#include <iostream>
#include <cstring>
using namespace std;
void lastOccurence(string &str, char &ch, int index, int &ans)
{
    if (index >= str.length())
    {
        return;
    }

    if (str[index] == ch)
    {
        ans = index;
    }
    lastOccurence(str, ch, index + 1, ans);
}
int main()
{
    string str;
    cin >> str;
    char ch;
    cin >> ch;
    int index = 0;
    int ans = -1;
    lastOccurence(str, ch, index, ans);
    cout << ans;
}