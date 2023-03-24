#include <iostream>
#include <climits>
using namespace std;
int BinarySearch(int array[], int &n, int s, int e, int &key)
{
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (array[mid] == key)
    {
        return mid;
    }
    if (array[mid] < key)
    {
        return BinarySearch(array, n, mid + 1, e, key);
    }
    else
    {
        return BinarySearch(array, n, s, mid - 1, key);
    }
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
    int key;
    cout << "enter the value you want to search: ";
    cin >> key;
    cout << BinarySearch(array, n, s, e, key);
}