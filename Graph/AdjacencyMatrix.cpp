#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int n;
    cout<<"Enter Number of Nodes: ";
    cin>>n;

    vector<vector<int> > Adj(n,vector<int> (n,0));

    int e;
    cout<<"Enter the number of edges: ";
    cin>>e;

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        Adj[u][v]=1;
    }

    // printing the adjacency matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<Adj[i][j]<<" ";
        }
        cout<<endl;
    }

}