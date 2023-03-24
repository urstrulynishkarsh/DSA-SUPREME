#include <iostream>
#include <climits>
using namespace std;
bool SortedOrNOT(int array[], int &n, int index)
{
    if (index == n - 1)
    {
        return true;
    }
    if (array[index] > array[index + 1])
    {
        return false;
    }
    SortedOrNOT(array, n, index + 1);
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *array = new int[n];
    cout << "Enter the element in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int index = 0;
    cout << SortedOrNOT(array, n, index);
}