#include <iostream>
#include <vector>
using namespace std;
void leftRotate(vector<int> arr)
{
    int temp;

    for (int i = 0; i < arr.size() - 1; i++)
    {
        // arr[arr.size() - 1] = arr[0];
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    leftRotate(arr);
}