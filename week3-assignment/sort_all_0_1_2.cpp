#include <iostream>
#include <vector>
using namespace std;
void sortAll(vector<int> &v)
{
    int l = 0, m = 0, h = v.size() - 1;
    while (m <= h)
    {
        if (v[m] == 0)
        {

            swap(v[l], v[m]);
            l++;
            m++;
        }
        else if (v[m] == 1)
        {

            m++;
        }
        else if (v[m] == 2)
        {
            swap(v[m], v[h]);
            h--;
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
    sortAll(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}