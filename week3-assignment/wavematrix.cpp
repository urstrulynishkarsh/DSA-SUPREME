#include <iostream>
using namespace std;
void solve(int arr[][4], int n, int m)
{
    for (int startcol = 0; startcol < m; startcol++)
    {
        if ((startcol & 1) == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i][startcol] << " ";
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << arr[i][startcol] << " ";
            }
        }
    }
}
int main()
{
    int n = 3;
    int m = 4;
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    solve(arr, n, m);
}