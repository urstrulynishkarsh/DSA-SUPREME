#include <iostream>
#include <vector>
using namespace std;
void Permutation(string &str, vector<string> &output, int index)
{
    if (index >= str.length())
    {
        output.push_back(str);
        return;
    }
    for (int j = index; j < str.length(); j++)
    {
        swap(str[index], str[j]);
        Permutation(str, output, index + 1);
        swap(str[index], str[j]);
    }
}
int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    vector<string> output;
    int index = 0;
    Permutation(str, output, index);
    cout << "Printing all the permutations of the string" << endl;
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;
    cout << output.size() << endl;
}
