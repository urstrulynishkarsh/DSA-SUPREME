#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {1, 2, 3, 4};
    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *arr + 2 << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << i[arr] << endl;
    }

    int *p = arr;
    // arr = arr + 1; we can not update the array
    cout << p << endl;
    p = p + 1;
    cout << p << endl;
}