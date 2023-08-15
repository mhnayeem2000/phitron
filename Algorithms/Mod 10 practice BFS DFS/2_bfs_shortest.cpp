#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
vector<int> g[N];
bool visited[N];
vector<int> level(N);
vector<int> parent(N);
void bfs(int s){
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    parent[s] = -1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : g[u]){
            if( visited[v] ) continue;
            q.push(v);
            visited[v] = true;
            level[v] =  level[u] +1;
            parent[v] = u;
        }
    }
}
int main(){
    int n , m ;
    cin >> n >> m;
    for( int i  = 0 ; i < m ; i++){
        int u , v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(1);
    cout << level[n] << " " << endl;

    int cc = n;
    vector<int> path;
    while(cc != -1){
        path.push_back(cc);
        cc = parent[cc];
    }
    reverse(path.begin(), path.end());
    for( int l  : path){
        cout << l << " ";
    }
    return  0;
}