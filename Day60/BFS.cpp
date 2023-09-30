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


    void bfs(int src,unordered_map<int,int> &visited,vector<int> &ans)
{
    queue<int>q;
    q.push(src);
    visited[src]=true;
    while(!q.empty())
    {
        int frontNode=q.front();
        q.pop();
        // cout<<frontNode<<",";
        ans.push_back(frontNode);
        // push  the neighbour into the queue
        for(auto neighbour: adjacencyList[frontNode])
        {
            if(!visited[neighbour])
            q.push(neighbour);
            visited[neighbour]=true;
        }
    }
}



};





int main()
{
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(3,5,0);   
    g.addEdge(3,7,0);
    g.addEdge(7,6,0);
    g.addEdge(7,4,0);

    cout<<"Printing the adjacencyList"<<endl;

    g.printAdjacencyList();

    unordered_map<int,int> visited;
    vector<int> ans;

    for(int i=0;i<7;i++)
    {
        if(!visited[i])
        {
            g.bfs(i,visited,ans);
        }
    }

    for(auto it:ans)
    {
        cout<<it<<" ";
    }

}