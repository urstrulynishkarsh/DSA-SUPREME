#include <iostream>
#include <stack>
using namespace std;

void insertSortedManner(stack<int> &st, int target)
{
    if (st.empty())
    {
        st.push(target);
        return;
    }

    if (st.top() >= target)
    {
        st.push(target);
        return;
    }
    int topelement = st.top();
    st.pop();
    insertSortedManner(st, target);
    st.push(topelement);
}

void sortedstack(stack<int> &st)
{
    if (st.empty())
    {

        return;
    }
    int topelement = st.top();
    st.pop();
    sortedstack(st);
    insertSortedManner(st, topelement);
}

int main()
{
    stack<int> st;

    st.push(20);
    st.push(30);
    st.push(40);
    st.push(60);
    st.push(70);

    int target = 50;

    insertSortedManner(st, target);
    sortedstack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}