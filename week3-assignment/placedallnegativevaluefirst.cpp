#include <iostream>
#include <vector>
using namespace std;
void placeAllNegative(vector<int> &v)
{
    int l = 0;
    int h = v.size() - 1;
    while (l <= h)
    {
        if (v[l] < 0)
        {
            l++;
        }
        else if (v[h] > 0)
        {
            h--;
        }
        else
        {
            swap(v[l], v[h]);
        }
    }
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
    placeAllNegative(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}