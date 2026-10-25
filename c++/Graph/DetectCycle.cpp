#include <bits/stdc++.h>
using namespace std;
bool dfs(int node, int parent,
         vector<vector<int>>& adj,
         vector<int>& visited) {
    visited[node] = 1;
    for (int neighbour : adj[node]) {
        if (!visited[neighbour]) {
            if (dfs(neighbour, node, adj, visited))
                return true;
        }
        else if (neighbour != parent) {
            return true;  // Cycle detected
        }
    }
    return false;
}
bool isCycle(int V, vector<vector<int>>& adj) {
    vector<int> visited(V, 0);
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfs(i, -1, adj, visited))
                return true;
        }
    }
    return false;
}
int main() {
    int V = 3;
    vector<vector<int>> adj(V);
    adj[0] = {1, 2};
    adj[1] = {0, 2};
    adj[2] = {0, 1};
    cout << (isCycle(V, adj) ? "Cycle exists" : "No cycle");
}
