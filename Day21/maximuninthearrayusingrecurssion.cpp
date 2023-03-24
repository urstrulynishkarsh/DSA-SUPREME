#include <iostream>
#include <climits>
using namespace std;
int MaximumInTheArray(int array[], int &n, int index, int &maxi)
{
    if (index >= n)
    {
        return maxi;
    }
    if (array[index] > maxi)
    {
        maxi = array[index];
    }
    MaximumInTheArray(array, n, index + 1, maxi);
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
    int maxi = INT_MIN;

    int index = 0;
    cout << MaximumInTheArray(array, n, index, maxi);
}