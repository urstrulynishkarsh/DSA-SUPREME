#include <iostream>
using namespace std;
int main()
{
    char name[100];
    cin >> name;
    for (int i = 0; i < 8; i++)
    {
        cout << "index at: " << i << " value: " << name[i] << endl;
    }
    int value = (int)name[6];
    cout << "value is: " << value << endl;
}