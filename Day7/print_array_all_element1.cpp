#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > 1)
        {
            arr[i] = 1;
        }
        cout << arr[i] << " ";
    }
}