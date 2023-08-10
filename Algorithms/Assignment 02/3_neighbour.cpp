#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs( int s){
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] =0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for( auto v : adj[u]){
            if( visited[v] ) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
}

int main(){
    int n , m;
    cin >> n >> m ;
    for ( int i = 0 ; i < m ; i++){
        int u , v; 
        cin >> u >> v ;
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }
    
    int f;
    cin >> f ;
    for( int j = 0 ; j < n ; j++){
        visited[j] = false ;
        level[j] = 0 ; 
    }
    bfs(f);
    int count = 0 ;
    for( int i = 0 ; i < n-1 ; i++){
       if( visited[i] == 2 ){
        cout << visited[i] << " " ;
        count++;
       }
    }
    cout << count << endl;
    return 0;
}