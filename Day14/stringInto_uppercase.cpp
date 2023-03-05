#include <iostream>
#include <string.h>
using namespace std;
void UpperCase(char name[])
{
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z' && name[i] != ' ')
            name[i] = name[i] - 'a' + 'A';
    }
    cout << "in upper case: " << name << endl;
}
int main()
{
    char name[100];
    cin.getline(name, 100);
    cout << "in lower case: " << name << endl;
    UpperCase(name);
}