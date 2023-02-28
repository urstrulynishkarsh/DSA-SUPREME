#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int> v)
{
    for (int i = 1; i < v.size(); i++)
    {
        // 1-fetch the element
        int value = v[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (v[j] > value)
            {
                v[j + 1] = v[j];
            }
            else
            {
                break;
            }
        }
        // copy the value
        v[j + 1] = value;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the element in the array: ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    insertionSort(v);
}