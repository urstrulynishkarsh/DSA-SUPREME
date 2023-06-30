#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int findDuplicate(vector<int> &v)
{
    // sort(v.begin(), v.end());
    // for (int i = 0; i < v.size() - 1; i++)
    // {
    //     if (v[i] == v[i + 1])
    //     {
    //         return v[i];
    //     }
    // }
    // return -1;

    // this takes O(nlogn)

    while (v[0] != v[v[0]])
    {
        swap(v[v[0]], v[0]);
    }
    return v[0];

    // this takes O(n)
}

int main()
{
    int n;
    cout << "Enter the size of Vector: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the Element in the Vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    cout << findDuplicate(v);
}