#include <iostream>
#include <limits.h>
using namespace std;
int maximumArrayNumber(int arr[], int size)
{
    int maxno = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxno)
        {
            maxno = arr[i];
        }
    }
    return maxno;
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
    cout << maximumArrayNumber(arr, size);
}