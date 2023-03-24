#include <iostream>
using namespace std;
void ReverseArray(int array[], int n, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    swap(array[e], array[s]);
    ReverseArray(array, n, s + 1, e - 1);
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
    int s = 0;
    int e = n - 1;
    ReverseArray(array, n, s, e);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}