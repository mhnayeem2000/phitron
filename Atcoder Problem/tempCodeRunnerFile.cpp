#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string st;
    cin >> st;  
    int tcount = 0 , acount = 0;
    for(int i = 0; i < st.length(); i++){
        if(st[i] == 'T'){
            tcount++;
        }else acount++;
    }
    if( tcount > acount ) cout <<< "T" << endl;
    else cout << "A" << endl;
    return 0;
}