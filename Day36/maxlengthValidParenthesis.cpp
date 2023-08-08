#include<iostream>
#include<vector>
#include<stack>
#include<string.h>
using namespace std;

int maxLengthValidParenthesis(string &s,stack<int> &st,int &maxlen)
{
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch=='(')
        {
            st.push(i);
        }
        else{
            st.pop();
            if(st.empty())
            {
                st.push(i);
            }
            else{
                int len=i-st.top();
                maxlen=max(len,maxlen);
            }
        }
    }
    return maxlen;

}



int main(){
    string s="((())";
    stack<int> st;
    st.push(-1);
    int maxlen=0;

    cout<<maxLengthValidParenthesis(s,st,maxlen);

}