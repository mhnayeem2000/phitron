#include<bits/stdc++.h>
using namespace std;
typedef pair<int , int> pii;
const int N = 1e3+5;
bool visited[N][N];
int level[N][N];
int si,sj,di,dj;
vector<pii> direc = {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
bool isvalid(int i , int j){
    return(i >= 0 && i < 8 && j >= 0  && j < 8);
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
    for( int i = 0; i < 8  ; i++ ){
        for( int j = 0; j <8 ; j++ ){
            level[i][j] = 0;
            visited[i][j] = false;
        }
    }
}
int main(){
   int test;
   cin >> test;
   while(test--){
     int n;
    cin >> n;
    for( int i = 0; i < n; i++ ){
        string x,y;
        cin >> x >> y;
        si = x[0]-'a';
        sj = x[1]-'1';
        di = y[0] - 'a';
        dj = y[1] - '1';
        bfs(si,sj);
        cout << level[di][dj] << endl;
        reset_l();
    }
   }
    return 0;
}