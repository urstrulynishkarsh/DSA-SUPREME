#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        j = i;
        for (; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}