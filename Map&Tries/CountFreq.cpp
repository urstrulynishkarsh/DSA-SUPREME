#include<iostream>
#include<unordered_map>
#include<map>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"Enter Your String: ";
    cin>>str;
    map<char,int> freq;
    // unordered_map<char,int> freq;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        freq[ch]++;
    }
    for(auto i:freq)
    {
        cout<<i.first<<"->"<<i.second<<endl;
    }


}