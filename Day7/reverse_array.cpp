#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    reverse(arr);
}