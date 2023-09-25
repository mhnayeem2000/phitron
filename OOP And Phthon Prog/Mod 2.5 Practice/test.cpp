#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
       string s;
       cin >> s;
       for(int i = s.size()-1; i >=0 ; i--){
        cout << s[i] << " ";
       }
       cout << endl;
    }
    return 0;
}