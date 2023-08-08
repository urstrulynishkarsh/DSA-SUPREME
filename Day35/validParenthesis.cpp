#include<iostream>
#include<strings.h>
#include<stack>
using namespace std;


bool ValidParenthesis(stack<char> & st, string &s)
{
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];

        // opening bracket
        if(ch=='(' ||ch=='{'||ch=='[')
        {
            st.push(ch);
        }
        else{
            // closing bracket
            if(!st.empty())
            {
                char topchar=st.top();

                if(ch==')' && topchar=='(')
                {
                    st.pop();
                }
                else if(ch=='}' && topchar=='{')
                {
                    st.pop();
                }
                else if(ch==']' && topchar=='[')
                {
                    st.pop();
                }
                else{
                    return false;
                }

            }
            else{
                return false;
            }
        }
    }
    if(st.empty())
    {
        return true;
    }
    else{
    return false;
    }
}

int main()
{
    string s="({}[])";
    stack<char> st;
    cout<<ValidParenthesis(st,s);

}