#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int ct = 0;
void dfs(int u){
     visited[u] = true;
     //cout << u << " ";
     for( int v : adj[u]){
        if( visited[v]) continue;
        dfs(v);
        ct++;
     }
    cout << ct << " ";
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

    int cc = 0;
    for( int i = 0; i <n ; i++){
        if( visited[i]) continue;
        dfs(i);
        cc++;
    }
   //cout<< cc << endl;
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