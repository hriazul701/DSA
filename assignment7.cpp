#include <iostream>
using namespace std;
class Graph
{
int n;
intadj[20][20];
bool visited  ];
public:
// Create Graph using Adjacency Matrix
voidcreateGraph )
{
cout << "Enter number of intersections: ";
cin>>n;
// Initialize adjacency matrix
for (inti = 0; i < n;i++)
{
}
for (int j=0; j<ήj++)
{
adj[i][j] =0;
}
visitedi = false;
int edges;
cout << "Enter number of roads: ";
cin >> edges;
cout << "Enter the roads (source destinatiom";
for (in𝔭=0; i < edges; i++)
{
int u, v,
cin >> u >> v;
adj[u][v]
=1
adj[v][u] =1
}
// Display Adjacency Matrix
voiddisplayMatri
{
cout << "\nAdjacencyMatrix:\n";
for (inti = 0; i < n;i++)
{
for (int j=0; j<mj++)
}
{
cout << adj[i][j] << " ";
}
cout << endl;
}
// Depth First Search
voidDFS(int vertex)
{
visited[vertex] = true;
cout << vertex << " ";
for (inti = 0; i < n;i++)
{
if (adj[vertex]] == 1 & !visitedi])
{
DFS();
}
}
}
// Start DFS Traversal
voidperformDF$)
{
int start;
cout << "\nEnterstarting intersection: ";
cin >> start;
// Reset visited array
for (inti = 0; i < n;i++)
{
visitedi = false;
}
cout << "\nDFS Traversal: ";
DFS(start);
cout << endl;
}
};
intmain)
{
Graph g;
g.createGraph();
g.displayMatri);
g.performDF$);
return 0;
