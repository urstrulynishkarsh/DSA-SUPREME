#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name[100];
    // getline(std::cin, name);
    cin.getline(name, 100);
    cout << name << endl;
    cout << name[14];
}