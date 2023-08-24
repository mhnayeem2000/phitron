#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
vector<string> g;
vector<bool> visited[N][N];
void dfs(int si,int sj){

}
int main(){
    int n , m;
    cin >> n >> m;
    for( int i=0; i<n; i++ ){
        string x;
        cin >> x;
        g.push_back(x);
    }
    int si,sj,di,dj;
    cin >> si >> sj;
    cin >> di >> dj;
    if(!visited[si][sj] && g[si][sj] == '.'){
        dfs(si,sj);
    }
    return 0;
}