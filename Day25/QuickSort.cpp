#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &v, int s, int e)
{
    // index choose of pivot element
    int pivotindex = s;
    // choose pivot element
    int pivotelement = v[s];

    // count value for smaller elements and place pivotelement after smaller number

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (v[i] <= pivotelement)
        {
            count++;
        }
    }

    //
    int rightindex = s + count;
    swap(v[pivotindex], v[rightindex]);
    pivotindex = rightindex;
    // check left anf right side for small anf big

    int i = s;
    int j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (v[i] <= pivotelement)
        {
            i++;
        }
        while (v[j] > pivotelement)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)

        {
            swap(v[i], v[j]);
        }
    }

    return pivotindex;
}
void quickSort(vector<int> &v, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // partion call index
    int p = partition(v, s, e);

    // left recursive call
    quickSort(v, s, p - 1);
    // right recursive call
    quickSort(v, p + 1, e);
}
int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the Element in the vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int s = 0;
    int e = n - 1;
    quickSort(v, s, e);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}