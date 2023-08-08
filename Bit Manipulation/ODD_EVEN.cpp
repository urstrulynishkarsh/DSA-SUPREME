#include<iostream>
using namespace std;
void oddEven(int &n){
    if(n==0)
    {
        return ;
    }
    if(n&1)
    {
        cout<<"given number "<<n<<" is odd";
    }
    else{
        cout<<"given number "<<n<<" is even";
    }
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    oddEven(n);
}