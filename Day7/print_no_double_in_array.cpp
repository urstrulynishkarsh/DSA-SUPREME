#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "Element double is: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] * 2 << ' ';
    }
}