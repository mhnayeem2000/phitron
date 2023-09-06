#include<bits/stdc++.h>
using namespace std;
int parent[100000];
int parent_size[100000];
void dsu_set( int n){
    for( int i=0; i<n; i++){
        parent[i] =  -1;
        parent_size[i] = 1;
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
        if(parent_size[leaderA] > parent_size[leaderB]){
            parent[leaderB] = leaderA;
            parent_size[leaderA] += parent_size[leaderB];

        }else {
            parent[leaderA] = leaderB;
            parent_size[leaderB] += parent_size[leaderA];
        }
    }
 }

int main(){
    int n,e,count = 0;
    cin >> n >> e;
    dsu_set(n);
    for(int i=0;i<e;i++){
        int a,b;
        cin >> a >> b;
        int leaderA =  find(a);
        int leaderB = find(b);
        if(leaderA == leaderB){
            count++;
        }else ds_union(a,b);
    }
    cout << count << endl;
    return 0;
}


/*
7 4
1 2
2 3
4 5
6 5
*/