#include<bits/stdc++.h>
using namespace std;
const int INF =  1e18;
int main(){
    long long int n , e;
    cin >> n >> e;
    long long int dist[n+1][n+1];
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            dist[i][j] = INF;
            if( i == j) dist[i][j] = 0;
        }
    }
    while(e--){
        long long int a, b , w;
        cin >> a >> b >> w;
        dist[a][b] = min(dist[a][b], w);
    }


    for( int k = 1 ; k <= n ; k++ ){
        for( int i = 1 ; i <= n ; i++ ){
            for( int j = 1 ; j <= n ; j++ ){
                if(dist[i][k]+dist[k][j]< dist[i][j]){
                    dist[i][j] = dist[i][k] +  dist[k][j];
                }
            }
        }
    }
    long long int size, x,y;
    cin >> size;
    for( int i = 1; i <=size; i++){
        cin >> x >> y;
        if (dist[x][y] == INF) {
            cout << -1 << endl;
        } else {
            cout << dist[x][y] << endl;
        }
    }
    return 0;
}

/*
4 6
1 2 3
2 1 2
1 4 5
4 3 2
3 2 1
2 4 4
*/