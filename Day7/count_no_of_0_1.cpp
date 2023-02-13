#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the element of the array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int num0 = 0;
    int num1 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            num0++;
        }
        if (arr[i] == 1)
        {
            num1++;
        }
    }
    cout << "number of zeroes in this array is: " << num0 << endl;
    cout << "number of ones in this array is: " << num1 << endl;
}