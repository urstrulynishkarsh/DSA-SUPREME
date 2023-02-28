#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int size = 10;
    int arr[10];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter number what you want to search:";
    cin >> key;
    int binarysearch = (binary_search(arr, arr + size, key));
    if (binarysearch)
    {
        cout << " found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}