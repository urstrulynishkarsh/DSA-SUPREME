#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key: ";
    cin >> key;
    bool flag = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << " key present";
    }
    else
    {
        cout << "no key present";
    }
}