#include<istream>
#include<vector>
#include<deque>
using namespace std;


void SlidingWindowMaximum(vector<int> &v,int &k,vector<int> &ans)
{
     deque<int>dq;
    // first k window
    for(int i=0;i<k;i++)
    {
        while(!dq.empty() && v[i]>=v[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(v[dq.front()]);

    for(int i=k;i<v.size();i++)
    {
        if(!dq.empty() && i-dq.front()>=k)
        {
            dq.pop_front();
        }
        while(!dq.empty() && v[i]>=v[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
        ans.push_back(v[dq.front()]);
    }
    
}


int main(){
      int n;
    cout<<"Enter the size of  Array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the element in the  Array: ";
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    int k=3;
    vector<int> ans;
    SlidingWindowMaximum(v,k,ans);
    cout<<ans;

}