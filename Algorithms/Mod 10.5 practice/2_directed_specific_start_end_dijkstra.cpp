#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int N =  1e3+5;
const int INF = 1e9+5;
vector<pii> adj[N];
vector<bool> visited(N);
vector<int> dist(N,INF);
vector<int> parent(N);

void dijkstra(int s){
    priority_queue<pii, vector<pii>,greater<pii>> pq;
    dist[s] = 0 ; 
    pq.push({dist[s], s});
    parent[s] = -1;
    while(!pq.empty()){
        int u = pq.top().second ;
        pq.pop();
        visited[u] = true ;
        for(pii vpair : adj[u]){
            int v = vpair.first ;
            int w = vpair.second ;
            if(visited[v]) continue;
            if(dist[v] > dist[u]+w){
                dist[v] = dist[u]+w ;
                pq.push({dist[v],v});
                parent[v] = u;
            }
        }
    }
}
int main(){
    int n , m;
    cin >> n >> m;
    for( int i = 0; i < m; i++ ){
        int u , v , w ; 
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
    }
    int start, end;
    cin >> start >> end;
    dijkstra(start);
    cout << dist[end] << endl;

    int cc = end;
    vector<int> path;
    while(cc != -1){
        path.push_back(cc);
        cc = parent[cc];
    }
    reverse(path.begin(), path.end());
    for(int p : path){
        cout << p << " ";
    }
    return 0;
}