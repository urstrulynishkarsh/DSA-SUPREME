#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    // creation
    unordered_map<string,int> m;


    // insertion
    pair<string, int> p=make_pair("hello",1);
    m.insert(p);

    pair<string,int> p2("Alto",2);
    m.insert(p2);

    m["fortuner"]=10;  // this is in good practice

    // access
    cout<<m.at("fortuner")<<endl;
    cout<<m.size()<<endl;
    cout<<m["alto"]<<endl;
    cout<<m["Alto"]<<endl;
    cout<<m.size()<<endl;


    // search
    cout<<m.count("fortuner")<<endl;
    if(m.find("fortune")!=m.end())
    {
        cout<<"fortuner is found";
    }
    else
    {
        cout<<"Fortuner is not found";
    }

    cout<<endl;



    cout<<"Printing all entries of the map";


    for(auto i:m)
    {
        cout<<i.first<<"->"<<i.second<<endl;
    }
   


}