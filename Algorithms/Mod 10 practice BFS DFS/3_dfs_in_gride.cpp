#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<string> gd;
int visited[N][N];
int n ,m ;
bool isvalied(int i , int j){
    return(i >=0 &&  i < n && j >=0 && j < m); 
}

void dfs(int i , int j){
    if(!isvalied(i,j)) return;
    if(visited[i][j]) return;
    if(gd[i][j] == '#') return;
    
    visited[i][j] = true;

    dfs(i,j-1);
    dfs(i,j+1);
    dfs(i-1,j);
    dfs(i+1,j);
}

int main(){

    cin >> n >> m;
    for(int i = 0 ; i <  n; i++ ){
        string s;
        cin >> s;
        gd.push_back(s);
    }
    int coutn = 0;
    for(int i = 0 ; i < n; i++){
        for( int j = 0 ; j < m; j++ ){
            if(visited[i][j]) continue ;
            if(gd[i][j] =='#') continue;
            dfs(i,j);
            coutn++;
        }
    }
    cout << coutn << endl;
    return 0 ;
}



/*
5 8
########
#..#...#
####.#.#
#..#...#
########
*/