#include <bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int> adj[],bool visited[]){

    // if visited node is true than simply return
    if(visited[node]) return;

    cout<<node<<" ";
    visited[node]=true;
    
    for(int nbr: adj[node]){
        dfs(nbr,adj,visited);
    }
}

int main()
{
    int n, e;
    cout << "Enter the number of node and edges: ";
    cin >> n >> e;
    vector<int> adj[n];

    cout << "Enter the Edges of Graph : \n";
    for (int i = 0; i < e; i++)
    {
        int v, u;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout<<"Your Graph DFS is : "<<endl;
    bool visited[n];
    memset(visited,false,sizeof(visited));
    dfs(4,adj,visited);
}