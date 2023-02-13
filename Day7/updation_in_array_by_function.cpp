#include <iostream>
using namespace std;
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void update(int arr[], int size)
{
    arr[0] += 10;
    print(arr, size);
}
int main()
{
    int arr[10] = {1, 2, 3};
    int size = 3;
    update(arr, size);
    print(arr, size);
}