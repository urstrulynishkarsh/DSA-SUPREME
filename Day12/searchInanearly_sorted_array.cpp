#include <iostream>
#include <vector>
using namespace std;
int searchNearlySorted(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (v[mid] == target)
        {
            return mid;
        }
        if (mid - 1 >= s && v[mid - 1] == target)
        {
            return mid - 1;
        }
        if (mid + 1 <= e && v[mid + 1] == target)
        {
            return mid + 1;
        }
        if (target > v[mid])
        {
            s = mid + 2;
        }
        if (target < v[mid])
        {
            e = mid - 2;
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
    int target;
    cout << "Enter the Element you want to search";
    cin >> target;

    int ans = searchNearlySorted(v, target);
    cout << ans;
}