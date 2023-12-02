#include<iostream>
#include<queue>
#include<stack>
using namespace std;


void interleaveFirstAndSecond(queue<int> &q1)
{
    if(q1.empty())
    {
        return; 
    }
    int n=q1.size();
    int k=n/2;
    int count=0;
    queue<int>q2;
    while(!q1.empty())
    {
        int temp=q1.front();
        q1.pop();
        q2.push(temp);
        count++;
        if(count==k)
        {
            break;
        }
    }

    while(!q1.empty() && !q2.empty())
    {
        int first=q2.front();
        q2.pop();
        q1.push(first);
        int second=q1.front();
        q1.pop();
        q1.push(second);
    }

    // odd bala case ye bhul jayenge
    if(n&1)
    {
        int element=q1.front();
        q1.pop();
        q1.push(element);
    }
    

}

int main(){
    queue<int>q1;
    q1.push(3);
    q1.push(6);
    q1.push(9);
    q1.push(12);
    q1.push(15);
    q1.push(18);
    q1.push(21);
    // q1.push(24);

    interleaveFirstAndSecond(q1);
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
}
