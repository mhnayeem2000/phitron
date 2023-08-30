#include<bits/stdc++.h>
using namespace std;
int parent[1000];
void set( int n){
    for( int i=0; i<n; i++){
        parent[i] =  -1;
    }
}
int find(int node ){
    while(parent[node] != -1){
        node = parent[node];
    }
    return node;
}
void ds_union(int a, int b){
    int leaderA = find(a);
    int leaderB = find(b);
    if( leaderA != leaderB ){
        parent[leaderB] = leaderA;
    }
 }

int main(){
    int n,e;
    cin >> n >> e;
    for(int i=0;i<e;i++){
        int a,b;
        cin >> a >> b;
        ds_union(a,b);
    }
    return 0;
}


/*
7 4
1 2
2 3
4 5
6 5
*/