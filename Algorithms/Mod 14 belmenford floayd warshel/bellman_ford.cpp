#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
const int N = 1e5+5;
const int INF = 1e9+10;
vector<pii> g[N];
int dis[N];
int n, m;
void disjtra(int s){
    for(int i = 1; i <=  n ; i++){
        dis[i] = INF;
    }
    dis[s] = 0;
    for( int i = 1 ; i < n ; i++){
        for( int u = 1 ; u <= n ; u++){
            for( pii vpair : g[u]){
                int v = vpair.first;
                int w = vpair.second;

                if(dis[u]!= INF && dis[v] > dis[u]+w){
                    dis[v] = dis[u]+w;
                }
            }
        }
    }
}
int main(){

    cin >> n >> m;
    while(m--){
        int u , v , w;
        cin >> u >> v >> w;
        g[u].push_back({v,w});
    }

    disjtra(1);
    for(int i = 1; i <= n; i++){
        cout << "Distance of " << i ;
        cout <<" : " << dis[i] << endl;
    }
    return 0;
}

/*
7 10
1 2 6
1 3 5
1 4 5
2 5 -1
3 2 -2
3 5 1
4 3 -2
4 6 -1
5 7 3
4 7 3
*/