#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<bool> visited(N);
vector<int> adj[N];

void dfs(int u){
    visited[u] = true;
    for( auto v:adj[u]){
        if(visited[v]) continue;
        dfs(v);
    }
}

int main(){
    int n;
    cin  >> n;
    for( int i=0; i<n; i++ ){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    dfs(1);
    for( int i = 1; i <= n; i++ ){
        cout << "janina " << i << ": " ;
        for(auto d:adj[i]){
        cout << d << " ";
    }
    cout << endl;
    }
    return 0;
}