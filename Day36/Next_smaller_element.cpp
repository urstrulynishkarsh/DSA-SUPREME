#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void nextSmallerElement(stack<int> &st, vector<int> &ans, vector<int> &v)
{
    for (int i = v.size() - 1; i >= 0; i--)
    {
        int current = v[i];
        while (st.top() >= current)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(current);
    }
}

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    stack<int> st;
    st.push(-1);

    vector<int> ans(v.size());

    nextSmallerElement(st, ans, v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}