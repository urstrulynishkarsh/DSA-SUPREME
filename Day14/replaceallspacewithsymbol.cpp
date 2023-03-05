#include <iostream>
#include <string.h>
using namespace std;
int getLength(char name[])
{
    int i = 0;
    int length = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
void replace(char name[])
{
    int n = getLength(name);
    for (int i = 0; i < n; i++)
    {
        if (name[i] == ' ')
        {
            name[i] = '@';
        }
    }
}
int main()
{
    char name[100];
    // getline(std::cin, name);
    cin.getline(name, 100);
    cout << "before name:  " << name << endl;
    replace(name);
    cout << "after name:  " << name << endl;
}