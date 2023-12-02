#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
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


    bool cycleDetectionUsingDfs(int source,unordered_map<int,bool> &visited,int parent)
    {
      
        visited[source]=true;
    
       for(auto nbr:adjacencyList[source])
       {
            if(!visited[nbr])
            {
                bool aangekaans=cycleDetectionUsingDfs(nbr,visited,source);
                if(aangekaans==true)
                {
                    return true;
                }
            }
            if(visited[nbr] && nbr!=parent)
            {
                return true;
            }

       }
       return false;

    }



};





int main()
{
    Graph g;
    // g.addEdge(0,1,0);
    // g.addEdge(1,2,0);
    // g.addEdge(1,3,0);
    // g.addEdge(3,5,0);   
    // g.addEdge(3,7,0);
    // g.addEdge(7,6,0);
    // g.addEdge(7,4,0);
    


      g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(3,4,0);
    g.addEdge(4,0,0);
    cout<<"Printing the adjacencyList"<<endl;

    g.printAdjacencyList();




    bool ans=false;
    unordered_map<int,bool> visited;
   

    for(int i=0;i<5;i++)
    {
        if(!visited[i])
        {
            ans=g.cycleDetectionUsingDfs(i,visited,-1);
            if(ans==true)
            {
                break;
            }
        }
    }

    if(ans==true)
    {
        cout<<"cycle is present";
    }
    else{
        cout<<"Cycle is not present";
    }

}