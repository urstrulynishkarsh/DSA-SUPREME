#include <iostream>
#include <vector>
using namespace std;
int pivotElement(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (v[mid] > v[mid + 1] && mid + 1 < v.size())
        {
            return mid;
        }
        if (v[mid - 1] > v[mid] && mid - 1 >= 0)
        {
            return mid - 1;
        }
        if (v[s] >= v[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int ans = pivotElement(v);
    cout << "the pivot element is: " << v[ans];
}