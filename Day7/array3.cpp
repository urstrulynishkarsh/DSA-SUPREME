#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << arr << endl;
    cout << &arr << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}