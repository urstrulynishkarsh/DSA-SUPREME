#include<iostream>
using namespace std;


bool CheckPowerOf2(int n){
   
    if(n<=0)
    {
        return false;
    }
    return ((n&(n-1))==0);

}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
  
    cout<<CheckPowerOf2(n);
    

}