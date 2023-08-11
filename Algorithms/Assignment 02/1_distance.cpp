#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs( int s){
    for( int j = 0 ; j <=100010 ; j++){
            visited[j] = false ;
            level[j] = -1; 
    }
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
        adj[v].push_back(u);
    }
    int size;
    cin >> size ;
    
    for( int i = 0 ; i < size ; i++){
        int f,d;
        cin >> f >> d;
        
        bfs(f);
        else cout << level[d] << endl;
    }
    
    return 0;
}