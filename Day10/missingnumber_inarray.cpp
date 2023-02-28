#include <iostream>
#include <vector>
using namespace std;
int missing(vector<int> v)
{
    int sum = v.size() * (v.size() + 1) / 2;
    for (int i = 0; i < v.size(); i++)
    {
        sum -= v[i];
    }
    return sum;
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < v.size() - 1; i++)
    {
        cin >> v[i];
    }
    cout << missing(v);
}