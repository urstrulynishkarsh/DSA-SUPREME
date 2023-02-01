#include <iostream>
using namespace std;
int main()
{
    int rowcount, columncount;
    cout << "Enter Row Count: ";
    cin >> rowcount;
    cout << "Enter Column Count: ";
    cin >> columncount;
    for (int row = 0; row < rowcount; row++)
    {
        for (int column = 0; column < columncount; column++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}