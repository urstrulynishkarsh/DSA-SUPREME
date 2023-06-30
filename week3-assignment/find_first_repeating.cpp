#include <iostream>
#include <vector>
#include <map>
using namespace std;
int firstRepeating(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // int element=v[i];
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                return i;
            }
        }
    }
    return -1;
    //     unordered_map<int, int> m;
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         m[v[i]]++;
    //     }
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         if (m[v[i]] > 1)
    //         {
    //             return i + 1;
    //         }
    //     }
    //     return -1;
    //
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
    cout << firstRepeating(v);
}