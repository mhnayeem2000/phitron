#include<bits/stdc++.h>
using namespace std;
const int N =  1e6+5;
vector<pair<int,int>> adjlist[N];
int main(){
    int n,m;
    cin >>n >> m;
    for(int i = 0; i < m; i++){
        int u,v,w;
        cin>> u >> v >> w;
        adjlist[u].push_back({v,w});    
        //adjlist[v].push_back[{u,w}];
    }

    for( int i = 1; i <= n ; i++){
        cout << "List " << i << ": " ;
        for( auto j : adjlist[i]){
            cout <<"(" << j.first;
            cout  << " " << j.second << ")";
        }
        cout << endl;
    }

    return 0;
}