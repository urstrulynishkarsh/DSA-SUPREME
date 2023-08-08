#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int> >AdjList;

    void addEdge(int u,int v,bool direction)
    {
        // direction -> 0 undirected
        // direction -> 1 directed
        AdjList[u].push_back(v);

        if(direction==0)
        {
            AdjList[v].push_back(u);
        }
    }

    void printAdjacencyList(){
        for(auto node:AdjList)
        {
            cout<<node.first<<"->";
            for(auto neighbours:node.second)
            {
                cout<<neighbours<<",";
            }
            cout<<endl;
        }
        
    }
};

int main()
{
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(0,2,0);

    cout<<endl;
    g.printAdjacencyList();
}
