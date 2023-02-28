#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int> array)
{
    for (int i = 0; i < array.size() - 1; i++)
    {
        int minNUmber = i;
        for (int j = i + 1; j < array.size(); j++)
        {
            if (array[j] < array[minNUmber])
            {
                minNUmber = j;
            }
        }
        swap(array[i], array[minNUmber]);
    }
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    vector<int> array(n);
    cout << "Enter the element in the array: ";
    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }
    selectionSort(array);
}