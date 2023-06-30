#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void Factorial(vector<int> &v, int &n, int &carry)
{

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            int x = v[j] * i + carry;
            v[j] = x % 10;
            carry = x / 10;
        }
        while (carry)
        {
            v.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(v.begin(), v.end());
    return;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int carry = 0;
    vector<int> v;
    v.push_back(1);
    Factorial(v, n, carry);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}
