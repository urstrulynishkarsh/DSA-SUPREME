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
    int binarysearch = (binary_search(v.begin(), v.end(), key));
    if (binarysearch)
    {
        cout << " found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}