#include <iostream>
using namespace std;
int main()
{
    char name[100];
    name[0] = 'a';
    name[1] = 'b';
    name[2] = 'c';
    cin >> name[3];
    cout << name[0] << " " << name[1] << " " << name[2] << " " << name[3];
}
