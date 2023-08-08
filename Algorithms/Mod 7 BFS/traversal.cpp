#include<bits/stdc++.h>
using namespace std;
const int N =  1e5+5;
vector<int> adjlist[N];
bool visited[N];
void bfs(int s){
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while( !q.empty()){
        int u = q.front();
        q.pop();
        cout << " Visiting Node : " << u << endl;
        for( auto v : adjlist[u] ){
            if( visited[v]) continue;
            q.push(v);
            visited[v] = true;
        }
    }
}


int main(){
    int n,m;
    cin >> n >> m ;
    for( int  i=0; i<m; i++ ){
        int u,v;
        cin >> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    bfs(1);
    return 0;
}

/*
12
11
1 2
1 3
1 10
2 4
2 5
3 9
5 6
5 7
10 11
10 12
6 8
*/