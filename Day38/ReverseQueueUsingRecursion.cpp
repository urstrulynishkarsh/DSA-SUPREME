#include<iostream>
#include<queue>
using namespace std;

void reverseRecursion(queue<int> &q)
{
    if(q.empty())
    {
        return;
    }
    int element=q.front();
    q.pop();
    reverseRecursion(q);
    q.push(element);
}

int main(){
    queue<int>q;
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(6);
    q.push(7);


    // printing the queue 
    // while(!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    reverseRecursion(q);

    // printing the queue 
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}