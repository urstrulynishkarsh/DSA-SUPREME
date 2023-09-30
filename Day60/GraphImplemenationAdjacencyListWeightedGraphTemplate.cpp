#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>

using namespace std;

template<typename T>
class Graph{
    public:
    unordered_map<T,list<T> > adjacencyList;

    void addEdge(T u,T v,bool direction)
    {
        // if direction=0  then it is undirected graph
        // and if direction =1 then it is directed Graph
        adjacencyList[u].push_back(v);
        if(direction==0)
        {
            adjacencyList[v].push_back(u);
        }
    }

    void printAdjacencyList()
    {
        for(auto node:adjacencyList)
        {
            cout<<node.first<<"-> {";
            for(auto neighbour:node.second)
            {
                cout<<neighbour<<",";
            }
            cout<<"}";
            cout<<endl;
            
        }
    }



};

int main()
{
    Graph<char> g;
    g.addEdge('a','b',1);
    g.addEdge('b','d',1);
    g.addEdge('b','c',1);   
    g.addEdge('c','d',1);
    g.addEdge('a','d',1);
    cout<<"Printing the adjacencyList"<<endl;
    g.printAdjacencyList();
}