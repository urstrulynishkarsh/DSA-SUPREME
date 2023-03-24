#include <iostream>
#include <climits>
#include <vector>

using namespace std;
void sumNonAdjacent(vector<int> &v, int sum, int &maxi, int index)
{
    if (index >= v.size())
    {
        maxi = max(sum, maxi);
        return;
    }
    sumNonAdjacent(v, sum + v[index], maxi, index + 2);
    sumNonAdjacent(v, sum, maxi, index + 1);
}

int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the element in the vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum = 0;
    int maxi = INT_MIN;
    int index = 0;
    sumNonAdjacent(v, sum, maxi, index);
    cout << maxi;
}