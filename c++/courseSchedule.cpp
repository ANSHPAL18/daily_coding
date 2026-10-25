#include <bits/stdc++.h>
using namespace std;
bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<vector<int>> adj(numCourses);
    vector<int> indegree(numCourses, 0);
    for (auto& p : prerequisites) {
        int a = p[0], b = p[1];
        adj[b].push_back(a);
        indegree[a]++;
    }
    queue<int> q;
    for (int i = 0; i < numCourses; i++) {
        if (indegree[i] == 0)
            q.push(i);
    }
    int count = 0;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        count++;
        for (int neighbour : adj[node]) {
            indegree[neighbour]--;
            if (indegree[neighbour] == 0)
                q.push(neighbour);
        }
    }
    return count == numCourses;
}
int main() {
    int numCourses = 4;
    vector<vector<int>> prerequisites = {
        {1, 0}, {2, 0}, {3, 1}, {3, 2}
    };
    cout << (canFinish(numCourses, prerequisites)
             ? "true" : "false") << '\n';

    return 0;
}
