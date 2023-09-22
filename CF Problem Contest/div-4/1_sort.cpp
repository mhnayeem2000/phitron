#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
            string s;
    cin >> s;
    if( s == "abc" || s == "acb" || s == "bac" || s == "cba" ){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
    }
}