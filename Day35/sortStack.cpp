#include<iostream>
#include<stack>
using namespace std;

void InsertSorted(stack<int> &s, int topElement)
{
    if(s.empty())
    {
         s.push(topElement);
        return;
    }
    if(s.top()>=topElement)
    {
        s.push(topElement);
        return;
    }
    int element=s.top();
    s.pop();
    InsertSorted(s,topElement);
    s.push(element);

}

void SortedStack(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    int topElement=s.top();
    s.pop();
    SortedStack(s);
    InsertSorted(s,topElement);

}
int main()
{
    stack<int> s;
    s.push(9);
    s.push(10);
    s.push(1);
    s.push(8);
    s.push(5);

    SortedStack(s);

    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    

}