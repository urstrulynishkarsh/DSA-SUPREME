#include <iostream>
#include <vector>
using namespace std;
int LastOccurrence(vector<int> v, int key)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (v[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > v[mid])
        {
            s = mid + 1;
        }
        else if (key < v[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
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
    int key;
    cout << "Enter number what you want to search:";
    cin >> key;
    int lastindex = LastOccurrence(v, key);
    if (lastindex)
    {
        cout << "found last occurence at " << lastindex << " index";
    }
    else
    {
        cout << "not found";
    }
}
