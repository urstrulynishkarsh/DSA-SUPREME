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
        if (row == 0 || row == rowcount - 1)
        {
            for (int column = 0; column < columncount; column++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int column = 0; column < columncount - 2; column++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << "\n";
    }
}