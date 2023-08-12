#include<bits/stdc++.h>
using namespace std;
typedef  pair<int , int> pii;
const int N = 1e5+5;
const int INF = 1e9+10;
vector<pii> adj[N];
vector<int> dist[N,INF];
vector<bool> visited(N);

void dijstra(int s){
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    dist[s] =0;
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
    int n , m;
    cin >> n >> m;
    for(int i = 0 ; i < m; i++){
        int u , v , w;
        cin >> u >> v >> w;
        adj[u].push_back({u,w});
        adj[v].push_back({v,w});
    }

    dijstra(1);
    return 0;
}