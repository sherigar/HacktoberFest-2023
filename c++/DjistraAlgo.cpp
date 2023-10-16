#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

#define INF INT_MAX

// Define a structure to represent an edge in the graph
struct Edge {
    int to;
    int weight;
};

// Dijkstra's algorithm function
void dijkstra(vector<vector<Edge>>& graph, int start, vector<int>& dist) {
    int n = graph.size();
    dist.assign(n, INF);
    dist[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        int u_dist = pq.top().first;
        pq.pop();

        if (u_dist != dist[u])
            continue;

        for (Edge& edge : graph[u]) {
            int v = edge.to;
            int weight = edge.weight;
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int n, m; // Number of nodes and edges in the graph
    cin >> n >> m;

    vector<vector<Edge>> graph(n);

    // Input the edges and their weights
    for (int i = 0; i < m; i++) {
        int u, v, weight;
        cin >> u >> v >> weight;
        graph[u].push_back({v, weight});
    }

    int start; // Starting node for Dijkstra's algorithm
    cin >> start;

    vector<int> dist;
    dijkstra(graph, start, dist);

    // Output the shortest distances from the start node
    for (int i = 0; i < n; i++) {
        cout << "Shortest distance from node " << start << " to node " << i << " is: " << dist[i] << endl;
    }

    return 0;
}
