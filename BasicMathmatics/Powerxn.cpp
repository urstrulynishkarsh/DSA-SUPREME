#include<iostream>
using namespace std;
int Solve(int &x,int &n)
{
    int ans=1;
    while(n>0)
    {
        if(n&1)
        {
            ans=ans*x;
        }
        x=x*x;
        n>>=1;
    }
    return ans;
}
int main(){

   int x=2;
   int n=5;

    cout<<Solve(x,n);

}