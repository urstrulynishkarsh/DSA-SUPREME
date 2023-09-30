#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>

using namespace std;

class Graph{
    public:
    unordered_map<int,list<int> > adjacencyList;

    void addEdge(int u,int v,bool direction)
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
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,3,1);
    g.addEdge(1,2,1);   
    g.addEdge(2,3,1);
    g.addEdge(0,3,1);

    cout<<"Printing the adjacencyList"<<endl;

    g.printAdjacencyList();
}