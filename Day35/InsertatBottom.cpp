#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st, int target)
{
    if (st.empty())
    {
        st.push(target);
        return;
    }
    int topelement = st.top();
    st.pop();
    solve(st, target);
    st.push(topelement);
}
void insertAtBottom(stack<int> &st)
{
    if (st.empty())
    {
        cout << "Stack is empty!" << endl;
        return;
    }
    int target = st.top();
    st.pop();
    solve(st, target);
}
