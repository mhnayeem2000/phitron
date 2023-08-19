#include<bits/stdc++.h>
using namespace std;
typedef pair<int , int> pii;
const int N = 1e3+6;
vector<string> g;
int visited[N][N];
int level[N][N];
pii parent[N][N];
int n , m;

vector<pii> direc = {{0,-1},{0,1},{-1,0},{1,0}};

void isValid(int i, int j){
    return(i >=0 && i < n && j >=0 && j < m);
}

void bfs(int si, int sj){
    queue<pii> q;
    q.push({si,sj});
    visited[si][sj] = true;
    level[si][sj] = 0;

    while(!q.empty()) {
        pii upair = q.front();
        int i = upair.first;
        int j = upair.second;
        for( auto d : direc){
            int ni = i+d.first;
            int nj = j+d.second;
            if(isValid(ni, nj) && !visited[ni][nj] && ){
                
            }
        }
    }
}

int main(){
    int si,sj,di,dj;
    cin >> n >> m;
    for( int i = 0; i < n; i++ ){
        string x;
        cin >> x;
        for(int j = 0; j < m; j++){
            if(x[j] == 's')
                si = i, sj = j;
            if(x[j] == 'e')
                di = i , dj  = j;    
        }
        g.push_back(x);
    }
    bfs(si,sj);

    return 0;
}