#include <iostream>
#include <vector>
using namespace std;
int linearSearch(vector<int> v, int key)
{
    int i;
    for (i = 0; i < v.size(); i++)
    {
        if (v[i] == key)
        {
            return i;
        }
    }
    return -1;
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
    int linear = linearSearch(v, key);
    if (linear == -1)
    {
        cout << "no found" << endl;
    }
    else
    {
        cout << "found at " << linear << " index ";
    }
}