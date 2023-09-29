#include<iostream>
#include<unordered_map>
using namespace std;


int main(){

    unordered_map<string,int> m;
    // insertion
    m["nishkarsh"]=10;
    m["ritik"]=20;
    m["Nitya"]=30;
    m["pintu"]=40;
    m["piyush"]=50;
    m["ashish"]=60;


    // access
    cout<<m.at("nishkarsh")<<endl;
    // cout<<m.at("harish")<<endl;
    cout<<m["ashish"]<<endl;


    // searching
    cout<<m.count("nishkarsh")<<endl;
       cout<<m.count("harish")<<endl;
    cout<<m.count("ashish")<<endl;


    // found or not
    if(m.find("nishkarsh")!=m.end())
    {
        cout<<"it is found in the map"<<endl;
    }
    else
    {
          cout<<"it is not found in the map"<<endl;
    }

    // size of the map;
    cout<<"size of the map is: "<<m.size(); //6
     cout<<m["harish"]<<endl;  // it will add the entry in the map  with value 0
      cout<<"size of the map is: "<<m.size()<<endl;


        // found or not
    if(m.find("harish")!=m.end())
    {
        cout<<"it is found in the map"<<endl;
    }
    else
    {
          cout<<"it is not found in the map"<<endl;
    }


       cout<<m["harish"]<<endl; 


    cout<<"printing all the Entries of the map: "<<endl;

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }



}
