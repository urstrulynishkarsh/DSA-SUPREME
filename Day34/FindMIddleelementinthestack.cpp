#include <iostream>
#include <stack>
using namespace std;
void findMiddleelement(stack<int> &s, int totalSize)
{
    if (s.size() == 0)
    {
        cout << "stack is empty so we can't find middle element" << endl;
        return;
    }
    if (s.size() == (totalSize / 2) + 1)
    {
        cout << "middle element is: " << s.top();
        return;
    }
    int temp = s.top();
    s.pop();
    findMiddleelement(s, totalSize);
    s.push(temp);
}
int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    int totalSize = s.size();

    findMiddleelement(s, totalSize);
}