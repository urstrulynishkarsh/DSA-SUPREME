#include<iostream>
#include<vector>
#include<deque>
using namespace std;


void Solve(int arr[],int size, int &k,vector<int> &ans)
{
    deque<int> q;
    // first k side window solve and push index in the queue
    for(int i=0;i<k;i++)
    {
        if(arr[i]<0)
        {
            q.push_back(i);
        }
    }
    // solve for remaining window
    for(int i=k;i<size;i++)
    {
        if(q.empty())
        {
            ans.push_back(0);
        }
        else{
            ans.push_back(arr[q.front()]);
        }

        // out of window element remove
        while((!q.empty()) && (i-q.front()>=k))
        {
            q.pop_front();
        }

        // check current element negative
        if(arr[i]<0)
        {
            q.push_back(i);
        }
    }
     if(q.empty())
        {
            ans.push_back(0);
        }
        else{
            ans.push_back(arr[q.front()]);
        }



}

int main(){
    int arr[8]={12,-1,-7,8,-15,20,16,28};
    int size=8;
    vector<int> ans;
    int k=3;
    Solve(arr,size,k,ans);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}