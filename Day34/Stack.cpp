#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;

    // insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);


    // printing thh element of stack
    
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    // deletion

    st.pop();
    st.pop();



    // check element on top

    cout<<"top element is: "<<st.top()<<endl;


    // size of stack is

    cout<<"size of stack is: "<<st.size()<<endl;


    // empty
    if(st.empty())
    {
        cout<<"stack is Empty";
    }
    else{
        cout<<"stack is not empty";
    }


}