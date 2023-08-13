#include<bits/stdc++.h>
using namespace std;
typedef  pair<int , int> pii;
const int N = 1e3+5;
const int INF = 1e9+10;
vector<pii> adj[N];
vector<int> dist(N,INF);
vector<bool> visited(N);

void dijstra(int s){
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    dist[s] = 0;
    pq.push({dist[s],s});
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;
        for(pii vppi : adj[u]){
            int v = vppi.first;
            int w = vppi.second;
            if(visited[v]) continue;
            if(dist[v] > dist[u]+w){
                dist[v] = dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0 ; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});  // Fix: Pushing the correct nodes into adjacency list
        adj[v].push_back({u, w});  // Fix: Pushing the correct nodes into adjacency list
    }

    dijstra(1);
    for(int i = 1 ; i <= n ; i++) {
        cout << "Distance of Node " << i << " : " ;
        cout << dist[i] << endl;
    }
    return 0;
}

/*
Sample Input:
7 8
1 2 3
1 3 5
3 4 1
4 6 1
2 5 6
5 6 1
5 7 2
3 7 12
*/
