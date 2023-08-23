#include<bits/stdc++.h>
using  namespace std;
const int N = 1e3+5;
vector<string> g;
bool visited[N][N];
int row, col;

bool isValied(int i , int j){
    return(i >= 0 && i < row &&  j >= 0 && j <col);
}

void dfs(int i , int j){
    if(!isValied(i,j)) return;
    if(visited[i][j]) return;
    if(g[i][j] == '#') return;

    visited[i][j] = true;

    dfs(i,j-1);
    dfs(i,j+1);
    dfs(i-1,j);
    dfs(i+1,j);
}

int main(){
    
    int count = 0;
    cin >> row >> col;
    for( int i=0; i<row; i++){
        string x;
        cin >> x;
        g.push_back(x);
    }
    for(int i = 0 ; i<row; i++){
        for(  int j =0 ; j < col ; j++){
            if(g[i][j] == '#') continue;
            if(visited[i][j]) continue;
            dfs(i,j);
            count++;
        }
    }
    cout << count << endl;
    return 0;
}