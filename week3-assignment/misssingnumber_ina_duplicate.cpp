#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void missingNumberDuplicate(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int index = abs(v[i]);
        if (v[index - 1] > 0)
        {
            v[index - 1] *= -1;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 0)
        {
            cout << v[i] << " ";
        }
    }

    // int i = 0;
    // int n = v.size() - 1;
    // while (i < n)
    // {
    //     int index = v[i] - 1;
    //     if (v[i] != v[index])
    //     {
    //         swap(v[i], v[index]);
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] != i + 1)
    //     {
    //         cout << i + 1 << ' ';
    //     }
    // }
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
    missingNumberDuplicate(v);
}