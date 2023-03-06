#include <iostream>
using namespace std;
void updatearray(int arr[], int n)
{
    cout << sizeof(arr) << endl; // it is pointer
    arr[0] = 50;
}
int main()
{
    int n = 10;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << sizeof(arr) << endl;
    cout << "before updating the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    updatearray(arr, n);
    cout << "after updating the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}