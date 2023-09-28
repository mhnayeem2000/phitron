#include <bits/stdc++.h>
using namespace std;
int main(){
int n=5,k=4;
        //cin >> n >> k;
        int a[n]={1,4,3,4,1};
        bool flag = false;
        for(int i=0; i < n; i++){
            if( a[i] == k){
                flag = true;
                break;
            }    
            else flag = false;  
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;    
    return 0;
}