#include <bits/stdc++.h>
using namespace std;
vector<int> topoSort(int V, vector<vector<int>>& adj) {
    vector<int> indegree(V, 0);
    for (int u = 0; u < V; u++) {
        for (int v : adj[u]) {
            indegree[v]++;
        }
    }
    queue<int> q;
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }
    vector<int> order;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        order.push_back(node);
        for (int neighbour : adj[node]) {
            indegree[neighbour]--;

            if (indegree[neighbour] == 0) {
                q.push(neighbour);
            }
        }
    }
    return order;
}
int main() {
    int V = 4;
    vector<vector<int>> adj(V);
    adj[0].push_back(2);
    adj[1].push_back(2);
    adj[2].push_back(3);
    vector<int> ans = topoSort(V, adj);
    for (int node : ans) {
        cout << node << " ";
    }
    return 0;
}
