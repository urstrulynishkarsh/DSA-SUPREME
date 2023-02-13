#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    int arr[5];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    memset(arr, -1, sizeof(arr));
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    memset(arr, 1, sizeof(arr));
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    memset(arr, 5, sizeof(arr));
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}