#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){

    string str="nishkarshverma";

    // unordered_map<char,int> m;
    map<char,int> m;

    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        m[ch]++;
    }

    for(auto i: m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }


}