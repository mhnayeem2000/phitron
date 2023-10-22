#include<bits/stdc++.h>
using namespace std;
int main(){
    string st = "codeforces";    
    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        char s;
        cin >> s;
        for(int i = 0; i < st.length(); i++){    
            if(st[i] == s){
                cout << "YES" << endl;
            }else cout << "NO" << endl;
        }    
    }
    return 0;
}