#include<bits/stdc++.h>
using namespace std;
typedef pair<int , int > pii;
const int N = 1e4+5;
const int INF = 1e9+10;
vector<pii> g[N];
int dist[N];
int n , m;
bool cycle = false;
void bellmen( int s){
    for( int i = 1; i <= n ; i++ ){
        dist[i] = INF;
    }
    dist[1] = 0;
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



int main(){
    cin >> n >> m;
    for( int i = 0 ; i < m ; i++ ){
        int u , v , w;
        cin >> u >>  v >> w;
        g[u].push_back({v,w});
    }

    bellmen(1);
    if(cycle){
        cout << "Cycle Detected" << endl;
    }else {
        for( int i = 1 ; i <= n ; i++ ){
            cout << " Distance " << i  ; 
            cout << " : " << dist[i] << endl;
        } 
    }    
    return 0;
}


/*
case 1:
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


case 2 :

4 5
1 3 5
1 2 4
2 3 2
3 4 3
4 1 -10
*/