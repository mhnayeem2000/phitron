#include<bits/stdc++.h>
using namespace std;
vector<int> dp(1005,-1);

bool target(int i , int n){
    if(i==n) return true;
    else if( i > n) return false;
    if( dp[i] != -1 ) return dp[i];


    if( target(i+3, n) || target(i*2,n) ) 
        return dp[i] = true;
    else 
        return dp[i] = false;
}

int main( ){
    int test;
    cin >> test;
    for( int i = 0; i < test;i++){
        int n;
        cin >> n;
        for( int j = 0; j <1005; j++){
            dp[i] = -1;
        }

        if(target(1,n))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;    
    }
    return 0;
}