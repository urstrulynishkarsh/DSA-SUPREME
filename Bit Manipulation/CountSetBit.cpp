#include<iostream>
using namespace std;


// int CountSetBit(int n){
   
//   int count=0;
//   while(n!=0){
//     if(n&1)
//     {
//         count++;
//     }
//     n>>=1;
//   }
//   return count;

// }


int CountSetBit(int n){
   
  int count=0;
  while(n!=0){
    n=(n&(n-1));
    count++;
  }
  return count;

}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
  
    cout<<CountSetBit(n);
    

}