#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        bool flag = false;
        for(int i=0; i < n; i++){
            if( a[i] == k){
                flag = true;
                break;
            }
            else flag = false;  
        }
        if( flag) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}