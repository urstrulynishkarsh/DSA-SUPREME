#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;

    // insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    // cout << endl;

    // remove
    st.pop();
    st.pop();

    // peek
    cout << "top of the value is:" << st.top();
    cout << endl;
    // empty or not
    cout << "stack is empty or not:" << st.empty() << endl;

    // sizeofset
    cout << "size of this stack is:" << st.size();
}