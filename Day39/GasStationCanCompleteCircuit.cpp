#include<iostream>
#include<vector>
using namespace std;


int StartPointOfCircleInGasStation(vector<int> &Gas, vector<int> &Cost)
{
    // defict means ghaata loss 
    int deficit=0;
    // saving gas 
    int balance=0;
    // starting point 
    int start=0;

    for(int i=0;i<Gas.size();i++)
    {
        balance+=Gas[i]-Cost[i];
        if(balance<0)
        {
            // ye galti kar sakta hu
            deficit+=balance;
            start=i+1;
            balance=0;
        }
    }
    if(deficit+balance>=0)
    {
        return start;
    }
    else{
        return -1;
    }

}

int main(){
    int n;
    cout<<"Enter the size of Gas Array: ";
    cin>>n;
    vector<int> Gas(n);
    cout<<"Enter the element in the Gas Array: ";
    for(int i=0;i<Gas.size();i++)
    {
        cin>>Gas[i];
    }
    int m;
    cout<<"Enter the size of Cost Array: ";
    cin>>n;
    vector<int> Cost(n);
    cout<<"Enter the element in the Gas Array: ";
    for(int i=0;i<Cost.size();i++)
    {
        cin>>Cost[i];
    }
    cout<<StartPointOfCircleInGasStation(Gas,Cost);
}