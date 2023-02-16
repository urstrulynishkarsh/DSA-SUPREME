#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a{1, 2, 3, 4, 5};
    int sizea = 5;
    vector<int> b{6, 7, 8};
    int sizeb = 3;
    vector<int> ans;
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(a[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(b[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
