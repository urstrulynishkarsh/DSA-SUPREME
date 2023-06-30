#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int maxSumSubArray(vector<int> &v, int s, int e)
{
    if (s == e)
    {
        return v[s];
    }
    int mid = s + ((e - s) >> 1);
    int maxLeftSum = maxSumSubArray(v, s, mid);
    int maxRightSum = maxSumSubArray(v, mid + 1, e);
    int maxLeftBorderSum = INT_MIN;
    int maxRightBorderSum = INT_MIN;
    int leftBorderSum = 0;
    int rightBorderSum = 0;
    for (int i = mid; i >= s; i--)
    {
        leftBorderSum += v[i];
        if (leftBorderSum > maxLeftBorderSum)
        {
            maxLeftBorderSum = leftBorderSum;
        }
    }
    for (int i = mid + 1; i <= e; i++)
    {
        rightBorderSum += v[i];
        if (rightBorderSum > maxRightBorderSum)
        {
            maxRightBorderSum = rightBorderSum;
        }
    }
    int crossborderSum = maxRightBorderSum + maxLeftBorderSum;

    return max(maxLeftSum, max(maxRightSum, crossborderSum));
}
int main()
{
    int n;
    cout << "Enter the size of Vector: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the Element in the vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int s = 0;
    int e = v.size() - 1;
    cout << maxSumSubArray(v, s, e);
}