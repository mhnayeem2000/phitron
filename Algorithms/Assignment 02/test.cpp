#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
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
        adj[v].push_back(u);
    }
    int f,d=1;
    cin >> f ;
    bfs(f);
    int count = 0;
    for( int i = 0 ; i < n ; i++){
        if( level[i] == 1){
            count++;
            //cout << i  << endl;
        }
    }
    cout << count << endl;
    return 0;
}

/*
6 7 
0 1
0 2
1 2
0 3
4 2
3 5
4 3
0 5

*/