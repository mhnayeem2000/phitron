#include<bits/stdc++.h>
using namespace std;
const int N =  1e3+5;
vector<int> adj[N];
bool visited[N];

bool dfs( int u,int p){
    bool iscycle = false;
    visited[u] = true;
    for( auto v : adj[u]){
        if( v == p) continue;
        if( visited[v] ) return true;
        iscycle = iscycle | dfs(v,u);
    }
    return iscycle;
}

bool dfs(int u, int p ){
    bool iscycle = false ;
    visited[u] = true;
    for( auto v : adj[u]){
        if( v == p) continue;
        if( visited[v] ) return true;
        iscycle |= dfs(u,v);
    }
    return iscycle ;
}

int main(){
    int n , m ;
    cin >> n >> m ; 
    for( int i = 0 ; i < m ; i++){
        int u, v;
        cin >> u >> v ;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if(dfs(1,-1)){
        cout << "Has Cycle" << endl;
    }else cout <<"No Cycle" << endl;
    return 0;
}

/*
 5 5
1 2
2 3
3 5
5 4
4 2                             \Algorit
Has Cycle


5 4
1 2
2 3
3 5
5 4
No Cycle
*/