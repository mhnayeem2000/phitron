#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : adj[u]) {
            if (visited[v]) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int f;
    cin >> f;
    for (int j = 0; j < n; j++) {
        visited[j] = false;
        level[j] = 0;
    }
    bfs(f);
    vector<int> directlyConnected;
    for (int i = 0; i < n; i++) {
        if (visited[i]) {
            directlyConnected.push_back(i);
        }
    }
    
    cout << "Number of houses directly connected to Kamal's house: " << directlyConnected.size() - 1 << endl;
    cout << "List of 1st level houses: ";
    for (int i = 0; i < directlyConnected.size(); i++) {
        if (directlyConnected[i] != f) {
            cout << directlyConnected[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}
