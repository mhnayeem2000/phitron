#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int adjmat[N][N];
int main(){
    int node,edge;
    cin >> node >> edge;
    for(int i=0;i<edge;i++){
        int u, v;
        cin >> u >> v ;
        adjmat[u][v] = 1;
        adjmat[v][u] = 1;
    }
    for(int i = 1 ;  i <= node; i ++){
        for( int j = 1 ; j <= node ; j ++){
            cout << adjmat[i][j]  << " " ;
        }
        cout << endl;   
    }
    return 0;
}