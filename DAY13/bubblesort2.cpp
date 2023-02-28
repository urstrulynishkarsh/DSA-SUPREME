#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swapped = true;
                swap(v[j], v[j + 1]);
            }
        }
        if (swapped == false)
        {
            break;
        }
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
    bubbleSort(v);
}