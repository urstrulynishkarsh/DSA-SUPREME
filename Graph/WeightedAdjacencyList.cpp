#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
#include <utility> 

using namespace std;

class Graph{
    public:
    unordered_map<int,list<pair<int,int> > >AdjList;

    void addEdge(int u,int v,int weight, bool direction)
    {
        // direction -> 0 undirected
        // direction -> 1 directed
        AdjList[u].push_back(std::pair<int, int>(v, weight));

        if(direction==0)
        {
           AdjList[v].push_back(std::pair<int, int>(u, weight));

        }
    }

    void printAdjacencyList(){
        for(auto node:AdjList)
        {
            cout<<node.first<<"->";
            for(auto neighbours:node.second)
            {
                cout<<'('<<neighbours.first<<","<<neighbours.second<<')'<<',';
            }
            cout<<endl;
        }
        
    }
};

int main()
{
    Graph g;
    g.addEdge(0,1,8,0);
    g.addEdge(1,2,3,0);
    g.addEdge(0,2,4,0);

    cout<<endl;
    g.printAdjacencyList();
}
