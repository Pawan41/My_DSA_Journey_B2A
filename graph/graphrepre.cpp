#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, e;
    cout << "Enter the number of node/(vertices) and edges: ";
    cin >> v >> e;

    // adjacency matrix repersentation
    bool adjMatrix[v][v];
    memset(adjMatrix,false,sizeof(adjMatrix));
    
    /*
     for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            adjMatrix[i][j]=false;
        }
    }
    */

    // adjacency list repersentation
    vector<int> adjList[v];

    // edge list repersentation
    vector<pair<int,int>>edges;

    cout << "Enter the Edges of Graph : \n";
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        //adjacency matrix
        adjMatrix[u][v]=true;
        adjMatrix[v][u]=true;

        //adjacency list
        adjList[u].push_back(v);
        adjList[v].push_back(u);

        //edge list
        edges.push_back({u,v});
        edges.push_back({v,u});

    }

    cout<<"Your Graph adjacency matrix repersentation is : \n\n";
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"Your Graph adjacency list repersentation is : \n\n";
     for(int i=0;i<v;i++){
        cout<< i <<" : { ";
        for(int nbr:adjList[i]){
            cout<<nbr<<" ";
        }
        cout<<"}";
        cout<<"\n";
    }
    cout<<"Your Graph edge list repersentation is : \n\n";
    for(auto edge:edges){
        cout<<"("<<edge.first<<","<<edge.second<<")";
    }
}