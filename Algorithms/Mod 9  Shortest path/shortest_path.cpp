#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
int level[N];
bool visited[N];
int parent[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]= 0;
    parent[s]= -1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        visited[u]=true;
        for( int v:adj[u]){
            if( visited[v] ) continue;
            q.push(v);
            visited[v]=true;
            level[v] = level[u] + 1;
            parent[v] = u;
        }
    }
}

int main(){
    int node, edges;
    cin >> node >> edges ;
    for(  int i =  0 ; i < edges; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int s,d;
    cin >> s >> d;
    bfs(s);
    //cout << level[d] << endl;
    /*
     for( int i = 1 ; i <= node ; i++){
        cout << "parent of "<< i << " is :" << parent[i] << endl;
    }
    return 0;
    */

   vector<int> path;
   int current = d;
   while(current != -1){
        path.push_back(current);
        current = parent[current];
   }
   reverse(path.begin(), path.end());
   cout << "Path : ";
   for(int node : path){
    cout << node  << " ";
   }
   
}

/*
7 7
1 2
1 3
3 4
4 6
2 5
5 6
5 7
1 7
2
*/