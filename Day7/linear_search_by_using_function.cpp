#include <iostream>
#include <vector>
using namespace std;
bool find(vector<int> arr, int key)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            return true;
            break;
        }
    }
    return false;
}
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the Key what you want to search: ";
    cin >> key;
    if (find(arr, key))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
}
