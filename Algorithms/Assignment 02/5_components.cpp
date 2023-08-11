#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector <int> adj[N];
bool visited[N];
vector <int> length;
int ct = 0;
void dfs(int u){
     visited[u] = true;
     ct++;
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
    for( int i = 0; i <N ; i++){
        if( visited[i]) continue;
        dfs(i);
        length.push_back(ct);
        ct = 0;
    }
    sort(length.begin(),length.end());
    for(int j : length){
        if(j>1 ){
            cout << j << " ";
        }
    }
    return 0;
}
