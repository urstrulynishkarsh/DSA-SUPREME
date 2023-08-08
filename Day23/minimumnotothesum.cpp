#include <iostream>
#include <climits>
#include <vector>

using namespace std;
int Minimumnumbertothesum(vector<int> &v, int target)
{
    if (target == 0)
    {
        return 0;
    }
    if (target < 0)
    {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<"i"<<i<<endl;
        int ans = Minimumnumbertothesum(v, target - v[i]);
        if (ans != INT_MAX)
            mini = min(mini, ans + 1);
    }
    return mini;
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
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    cout << Minimumnumbertothesum(v, target);
}