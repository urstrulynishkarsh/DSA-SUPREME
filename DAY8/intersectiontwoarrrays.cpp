#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> a{1, 2, 3, 4, 5};
    vector<int> b{3, 4, 8};
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        int element = a[i];
        for (int j = 0; j < b.size(); j++)
        {
            if (element == b[j])
            {
                b[j] = INT_MIN;
                ans.push_back(element);
            }
        }
    }
    for (auto value : ans)
    {
        cout << value << " ";
    }
}
