#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
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
    vector<int>::iterator low, up;
    low = lower_bound(v.begin(), v.end(), key);
    up = upper_bound(v.begin(), v.end(), key);
    cout << "first occurence at" << (low - v.begin()) << " index";
    cout << "last occurence at" << (up - v.begin() - 1) << " index";
}