#include <bits/stdc++.h>
using namespace std;
template <typename T>

// Graph using adj List    
class Graph
{
public:
    unordered_map<T, list<T>> adj;

    void addEdges(T u, T v, bool direction)
    {
        // direction is 0 then  graph is undirected 
        // direction is 1 then graph is directed 
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printedges()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << " , ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of node " << endl;
    cin >> n;

    int m;
    cout << "Enter the number of edges" << endl;
    cin >> m;

    Graph<int> g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdges(u, v, 0);
    }

    g.printedges();
}



// OUTPUT  :

// Enter the number of node 
// 4
// Enter the number of edges
// 5
// 0
// 1
// 0
// 4
// 1
// 3
// 4
// 3
// 3
// 2
// 2->3 , 
// 3->1 , 4 , 2 , 
// 4->0 , 3 , 
// 1->0 , 3 , 
// 0->1 , 4 , 