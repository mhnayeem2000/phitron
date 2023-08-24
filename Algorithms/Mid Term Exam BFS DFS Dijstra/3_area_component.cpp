#include<bits/stdc++.h>
using  namespace std;
typedef pair<int, int> pii;
const int N = 1e3+5;
vector<string> g;
bool visited[N][N];
int row, col;
vector<pii> path = {{-1,0},{1,0},{0,-1},{0,1}};
bool isValied(int i , int j){
    return(i >= 0 && i < row &&  j >= 0 && j <col);
}
int ct;
void dfs(int i , int j){
    if(!isValied(i,j)) return;
    if(visited[i][j]) return;
    if(g[i][j] == '-') return;
    ct++;
    visited[i][j] = true;

    for( auto vpari: path){
        int ni = vpari.first+i;
        int nj = j + vpari.second;
        dfs(ni,nj);
    }
}

int main(){

    cin >> row >> col;
    for( int i=0; i<row; i++){
        string x;
        cin >> x;
        g.push_back(x);
    }
    int mn = INT_MAX;
    for(int i = 0 ; i<row; i++){
        for(  int j =0 ; j < col ; j++){
            ct = 0;
            if(g[i][j] == '-') continue;
            if(visited[i][j]) continue;
            dfs(i,j);
            mn = min(ct,mn);
        }
    }

   if( mn == INT_MAX)
        cout << -1 << endl;
    else cout << mn << endl;
    return 0;
}