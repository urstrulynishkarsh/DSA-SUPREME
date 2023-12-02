#include<iostream>
#include<cmath>
using namespace std;

int  BinaryToDecimal(int &n)
{
    int i=0;
    int ans=0;
    int digit;
    while(n!=0)
    {
        digit=n%10;
        if(digit==1)
        {
            ans+=digit*pow(2,i);
        }
        n/=10;
        i++;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<BinaryToDecimal(n);
}