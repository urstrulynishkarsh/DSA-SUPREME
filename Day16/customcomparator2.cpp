#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
    return a > b;
}
bool compare1(int a, int b)
{
    return a < b;
}
int main()
{
    vector<int> v{3, 4, 1, 5, 7, 6};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), compare1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}