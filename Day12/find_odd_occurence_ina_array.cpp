#include <iostream>
#include <vector>
using namespace std;
int odd(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            return mid;
        }
        if (mid % 2 == 0)
        {
            if (v[mid] == v[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
        else
        {
            if (v[mid] == v[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
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
    int ans = odd(v);
    cout << v[ans];
}