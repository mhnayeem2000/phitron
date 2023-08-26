#include<bits/stdc++.h>
using namespace std;
typedef pair<int , int> pii;
const int N = 1e3+5;
bool visited[N][N];
int level[N][N];
int si,sj,di,dj;
int n,m;
vector<pii> direc = {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
bool isvalid(int i , int j){
    return(i >= 0 && i < n && j >= 0  && j < m);
}
void bfs(int si,int sj){
    queue<pii> q;
    q.push({si,sj});
    visited[si][sj] = true;
    level[si][sj] = 0;

    while(!q.empty()){
        pii upari = q.front();
        int i = upari.first;
        int j = upari.second;
        q.pop();

        for( auto d : direc){
            int ni = i+d.first;
            int nj = j+d.second;

            if(isvalid(ni,nj) && !visited[ni][nj]){
                q.push({ni,nj});
                visited[ni][nj] = true;
                level[ni][nj] = level[i][j] + 1;

            }
        }
    }
}


void reset_l(){
    for( int i = 0; i < n  ; i++ ){
        for( int j = 0; j <m ; j++ ){
            level[i][j] = 0;
            visited[i][j] = false;
        }
    }
}
int main(){
    int size;
    cin >> size;
    for( int i = 0; i < size; i++ ){
        cin >> n >> m;
        cin >> si >> sj >> di >> dj;
        bfs(si,sj);
        if(visited[di][dj]){
            cout << level[di][dj] << endl;
        }else cout << -1 << endl;
        reset_l();
    }
    return 0;
}