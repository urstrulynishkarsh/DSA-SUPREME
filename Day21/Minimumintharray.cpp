#include <iostream>
#include <climits>
using namespace std;
int MinimumInTheArray(int array[], int &n, int index, int &mini)
{
    if (index >= n)
    {
        return mini;
    }
    if (array[index] < mini)
    {
        mini = array[index];
    }
    MinimumInTheArray(array, n, index + 1, mini);
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *array = new int[n];
    cout << "Enter the element in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int mini = INT_MAX;

    int index = 0;
    cout << MinimumInTheArray(array, n, index, mini);
}