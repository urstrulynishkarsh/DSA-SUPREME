#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of Nodes: ";
    cin>>n;

    vector<vector<int> > adjacencyMatrix(n,vector<int>(n,0));

    int e;
    cout<<"Enter the number of edges: ";
    cin>>e;

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        // mark  by 1 for edge connection
        adjacencyMatrix[u][v]=1;
    }

    // printing the matrix

    cout<<"Printing the adjacency matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<adjacencyMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

}