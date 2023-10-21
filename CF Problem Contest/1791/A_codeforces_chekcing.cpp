#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string st = "codeforces";
        for(int i = 0; i < st.length(); i++){
            char s;
            cin >> s;
            if(st[i] == s){
                cout << "YES" << endl;
            }else cout << "NO" << endl;
        }    
    }
    return 0;
}