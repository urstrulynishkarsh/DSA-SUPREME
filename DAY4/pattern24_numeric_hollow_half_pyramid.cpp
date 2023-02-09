#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int count = 1;
    for (int row = 0; row < n - 1; row++)
    {
        cout << count;
        for (int col = 0; col < row; col++)
        {
            cout << "  ";
        }
        if (row != 0)
        {
            cout << row + 1;
        }
        cout << endl;
    }
    for (int k = 0; k < n; k++)
    {
        cout << count << " ";
        count++;
    }
}