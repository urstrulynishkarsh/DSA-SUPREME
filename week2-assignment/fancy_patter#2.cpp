#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << count;
            count++;
            if (j < i)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    // cout << count << endl;
    int start = count - n;
    for (int i = 0; i < n; i++)
    {
        int k = start;
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << k;
            k++;
            if (j < n - i - 1)
            {
                cout << "*";
            }
        }
        start = start - (n - i - 1);
        cout << endl;
    }
}