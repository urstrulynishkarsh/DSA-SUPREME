#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> a{1, 2, 3, 4, 5};
    vector<int> b{5, 6, 7};
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        int element = a[i];
        for (int j = 0; j < b.size(); j++)
        {
            if (element == b[j])
            {
                b[j] = INT_MIN;
            }
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        ans.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] != INT_MIN)
            ans.push_back(b[i]);
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }
}