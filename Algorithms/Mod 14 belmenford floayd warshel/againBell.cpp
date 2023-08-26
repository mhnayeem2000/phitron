#include<bits/stdc++.h>
using namespace std;
typedef pair<int , int > pii;
const int N = 1e5+10;
const int INF =  1e9+10;
vector<pii> g[N];
int dist[N];
int n , m;

void bellmen(int s){
    for( int i = 1; i <= n; i++ ){
        dist[i] = INF;
    }
    dist[s] = 0;
    for( int i = 0; i < n-1; i++ ){
        for( int u = 0 ; u < n ; u++ ){
            for( pii vpair : g[u]){
                int v = vpair.first;
                int w = vpair.second;
                if( dist[u] != INF && dist[v]> dist[u]+w){
                    dist[v] = dist[u] + w;
                }
            }
        }
    }
}

int main(){

    cin >> n >> m;
    for( int i = 0; i < m; i++ ){
        int u , v  ,   w;
        cin >> u >> v >> w;
        g[u].push_back({v,w});
    }
    bellmen(1);
    for(int i = 1; i <= n; i++){
    cout << "Distance is " << i ;
    cout << " : " << dist[i] << endl;
    }
    
    return 0;
}