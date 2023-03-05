#include <iostream>
#include <string.h>
using namespace std;
// int getLength(char name[])
// {
//     int count = 0;
//     for (int i = 0; i < strlen(name); i++)
//     {
//         count++;
//     }
//     return count;
// }

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
int main()
{
    char name[100];
    // getline(std::cin, name);
    cin.getline(name, 100);
    cout << name << endl;
    cout << "length is: " << getLength(name);
}