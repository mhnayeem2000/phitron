#include<bits/stdc++.h>
using namespace std;
typedef pair<int , int > pii;
const int N = 1e4+5;
const int INF = 1e9+10;
vector<pii> g[N];
int dist[N];
int n , m;
bool cycle = false;
void bellman( int s){
    for( int i = 1; i <= n ; i++ ){
        dist[i] = INF;
    }
    dist[s] = 0;
    for( int i = 1; i < n; i++ ){
        for( int  u = 1; u <= n ; u++ ){
            for( auto vpair : g[u]){
                int v  = vpair.first;
                int w = vpair.second;
                if( dist[u] != INF && dist[v] > dist[u]+ w){
                    dist[v] = dist[u]+ w;
                }
            }
        }
    }

    for( int  u = 1; u <= n ; u++ ){
        for( auto vpair : g[u]){
            int v  = vpair.first;
            int w = vpair.second;
            if( dist[u] != INF && dist[v] > dist[u]+ w){
                cycle = true;
                break;
                dist[v] = dist[u]+ w;
            }
        }
    }
}


int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }

    int source, test;
    cin >> source;
    cin >> test;
    bellman(source);
    for(int i = 0; i < test; i++) {
        int dest;
        cin >> dest;

        if(cycle) {
            cout << "Negative Cycle Detected" << endl;
            break;
        } else if(dist[dest] == INF) {
            cout << "Not Possible" << endl;
        } else {
            cout << dist[dest] << endl;
        }
    }

    return 0;
}
