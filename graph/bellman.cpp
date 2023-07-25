#include <bits/stdc++.h>
using namespace std;

void bellmanford(vector<vector<int>> edges, int src, int n)
{
    vector<int> dist(n, INT_MAX);
    dist[src] = 0;

    //n-1 relaxation steps-----------
    for (int i = 0; i < n - 1; i++){
        cout<<i<<"--->"<<endl;
        bool isRelaxed=false;
        for (vector<int> edge : edges){
            int curr = edge[0];
            int nbr = edge[1];
            int weight = edge[2];

            if (dist[curr]!=INT_MAX && dist[curr] + weight < dist[nbr]){
                isRelaxed=true;
                dist[nbr] = dist[curr] + weight;
            }
        }
        if(!isRelaxed)
        break;
    }

    //for checking negative edge weight cycle ... i will relax all the edges one more time
    for (vector<int> edge : edges){
        int curr = edge[0];
        int nbr = edge[1];
        int weight = edge[2];

        if (dist[curr]!=INT_MAX && dist[curr] + weight < dist[nbr]){
            cout<<"this graph contain negative edge weight cycle....\n";
            return;
        }
    }
    
    // print statement
    for (int i = 0; i < n; i++)
    {
        cout << "shortest distance to travel from " << src << " to " << i << " will be: " << dist[i] << " \n";
    }
}

int main()
{
    cout << "Please Enter the number of vertices and edges in your graph..\n";
    int v, e;
    cin >> v >> e;

    // for edge List Representation
    vector<vector<int>> edges;

    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        edges.push_back({u, v, w});
        edges.push_back({v, u, w});
    }

    int src;
    cout << "Please Enter the source from which you want all the shortest distance\n";
    cin >> src;

    bellmanford(edges, src, v);
}