#include <iostream>
#include <vector>
using namespace std;
int peakElement(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (v[mid] < v[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return v[e];
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int peak = peakElement(v);
    cout << peak;
}