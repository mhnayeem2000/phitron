#include <bits/stdc++.h>
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

class Edge{
    public:
    int a, b , w;
    Edge(int a, int b, int w){
        this->a = a;
        this->b = b;
        this->w = w;
    }
};

bool cmp(Edge a , Edge b){
    return a.w < b.w;
}


int main(){
    int n , e;
    cin >> n >> e;
    vector<Edge> v;
    while(e--){
        int a, b , w;
        cin >> a >> b >> w;
        v.push_back(Edge(a,b,w));
    }
    sort(v.begin(), v.end(),cmp);
    for( auto val: v){
        cout<< val.a<<" "<< val.b<< " "<< val.w<<endl;
    }
    return 0;
}


/*
7 11
1 2 5
1 3 7
3 2 9
3 5 8
5 6 5
3 6 7
2 4 6
2 6 15
4 6 8
4 7 11
6 7 9
*/