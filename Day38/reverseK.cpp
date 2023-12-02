#include<iostream>
#include<queue>
#include<stack>
using namespace std;


void ReverseKNode(queue<int> &q,int k)
{
    // k element push into stack
    stack<int>s;
    int n=q.size();
    if(k<=0 ||k>n)
    {
        return;
    }
    int count=0;
    while(!q.empty())
    {
        int element=q.front();
        q.pop();
        s.push(element);
        count++;
        if(count==k)
        {
            break;
        }
    }
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
    count=0;
    while(!q.empty() && n-k!=0)
    {
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;
        if(count==n-k)
        {
            break;
        }
    }
    

}

int main(){
    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12);
    q.push(15);
    q.push(18);
    q.push(21);
    q.push(24);

    ReverseKNode(q,3);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
