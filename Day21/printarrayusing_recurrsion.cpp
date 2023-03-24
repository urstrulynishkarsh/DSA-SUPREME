#include <iostream>
using namespace std;
void PrintArray(int array[], int n, int index)
{
    if (index == n)
    {
        return;
    }
    cout << array[index] << " ";
    PrintArray(array, n, index + 1);
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
    PrintArray(array, n, index);
}