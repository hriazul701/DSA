#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Graph
{
int n;
vector<int>adj[20];
bool visited[20];
public:
// Create Graph using Adjacency List
voidcreateGrap )
{
cout << "Enter number of users: ";
cin >> n;
int edges;
cout << "Enter number of friendships: ";
cin >> edges;
cout << "Enter friendships (source destination):\n";
for (in𝔭=0 i < edges; i++)
{
int u, v,
cin>>u>>v,
}
adj[u]push_back(v);
adj[v]push_back(u);
// Display Adjacency List
voiddisplayList)
{
cout << "\nAdjacencyList:\n";
for (inti = 0; i < n;i++)
{
cout << i << " -> ";
for (int j adj[i])
}
{
cout << j << " ";
}
cout << endl;
}
// Breadth First Search
void BFS(int start)
{
queue<int> q;
for (inti = 0; i < n;i++)
{
visitedi = false;
}
visited[start] = true;
q.push(start);
cout << "\nBFS Traversal: ";
while (.empty())
{
int vertex q.front();
q.pop();
cout << vertex << " ";
{
for (int neighbouradj[vertex])
if (!visited[neighbour])
{
visited[neighbour] = true;
q.push(neighbour);
}
}
cout << endl;
}
};
int main()
{
Graph g;
g.createGraph();
g.displayList);
int start;
cout << "\nEnterstarting user: ";
cin >> start;
g.BFS(start);
return 0;
