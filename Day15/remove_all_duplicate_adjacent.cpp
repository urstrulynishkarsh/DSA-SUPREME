#include <iostream>
#include <string.h>
using namespace std;
string removeAdjacentDuplicate(string str)
{
    string answer = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (answer.length() > 0 && answer[answer.length() - 1] == str[i])
        {
            answer.pop_back();
        }
        else
        {
            answer.push_back(str[i]);
        }
    }
    return answer;
}
int main()
{
    string str;
    cout << "Enter your string: ";
    getline(cin, str);
    cout << removeAdjacentDuplicate(str);
}