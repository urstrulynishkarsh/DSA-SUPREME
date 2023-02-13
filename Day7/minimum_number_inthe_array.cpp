#include <iostream>
#include <limits.h>
using namespace std;
int minimumArrayNumber(int arr[], int size)
{
    int minno = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minno)
        {
            minno = arr[i];
        }
    }
    return minno;
}
int main()
{
    int arr[10];
    int size = 10;
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << minimumArrayNumber(arr, size);
}