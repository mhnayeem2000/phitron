#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
void dfs(int u){
     visited[u] = true;
     cout << u << " ";
     for( int v : adj[u]){
        if( visited[v]) continue;
        dfs(v);
     }
}
int main(){
    int n,m;
    cin >> n >> m ;
    for(int i = 0 ; i < m ; i++){
        int u, v;
        cin  >> u >> v ;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);
    return 0;
}



/*

10 
9
1 2
1 3
1 10
2 4
3 5
3 6
4 7
4 8
6 9

1 2 4 7 8 3 5 6 9 10
*/