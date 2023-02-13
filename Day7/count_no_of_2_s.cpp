#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[200];
    cout << "Enter the element of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            count++;
        }
    }
    cout << "present 2's are :" << count;
}