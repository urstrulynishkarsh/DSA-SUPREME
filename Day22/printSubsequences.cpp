#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
void PrintSubsequences(string &str, string &output, int index, vector<string> &v)
{
    if (index >= str.length())
    {
        v.push_back(output);
        return;
    }
    // include the string output
    output.push_back(str[index]);
    PrintSubsequences(str, output, index + 1, v);
    output.pop_back(); // because we need to pass as excluded

    // exclude the string output
    PrintSubsequences(str, output, index + 1, v);
}
int main()
{
    string str;
    cout << "Enter your string:";
    cin >> str;
    string output = "";
    int index = 0;
    vector<string> v;
    PrintSubsequences(str, output, index, v);
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "length of output" << v.size();
}