#include<bits/stdc++.h>
using namespace std;

void dijkstra(vector<pair<int,int>> adj[],int src,int n){
    vector<int> dist(n,INT_MAX);
    dist[src]=0;

    // ---make a priority queue------- 
    priority_queue<pair<int,int>> pq;
    pq.push({0,src});

    while(!pq.empty()){
        int mDist=pq.top().first;
        int cur_node=pq.top().second;
        pq.pop();

        for(pair<int,int> nbrP: adj[cur_node]){
            int nbr=nbrP.first;
            int weight=nbrP.second;

            if(mDist + weight < dist[nbr]){
                dist[nbr]=mDist+weight;
                pq.push({dist[nbr],nbr});
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<"shortest distance to travel from "<<src<<" to "<<i<<" will be: "<<dist[i]<<" \n";
    }
}  

int main(){
    cout<<"Please Enter the number of vertices and edges in your graph..\n";
    int v,e;
    cin>>v>>e;

    //for adjacency List Representation
    vector<pair<int,int>> adj[v];

    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    int src;
    cout<<"Please Enter the source from which you want all the shortest distance\n";
    cin>>src;

    dijkstra(adj,src,v);
}