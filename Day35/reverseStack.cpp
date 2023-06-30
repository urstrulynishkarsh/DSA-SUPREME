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

void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        // cout << "Stack empty so we can't reverse";
        return;
    }
    int target = st.top();
    st.pop();
    reverseStack(st);
    solve(st, target);
}

int main()
{
    stack<int> st;

    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    reverseStack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}