#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int k = i;
        for(int j=1;j<=n;j++){
            if(i == 1 || j == n ){
                cout << j;
            }else if( i == n ||  j == 1 ){
                cout << i;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
       
    }
}    