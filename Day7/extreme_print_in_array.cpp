#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
void printExtremeNumber(vector<int> v)
{
    int start = 0;
    int end = v.size() - 1;
    while (start <= end)
    {
        if (start > end)
        {
            break;
        }
        if (start == end)
        {
            cout << v[start] << ' ';
        }
        else
        {
            cout << v[start] << " ";
            cout << v[end] << " ";
        }
        start++;
        end--;
    }
}
int main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    printExtremeNumber(v);
}