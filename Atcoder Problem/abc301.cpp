#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string st;
    cin >> st; 
    bool same = false; 
    int tcount = 0 , tcounti = -1 , acount = 0,acounti =-1;
    for(int i = 0; i < st.length(); i++){
        if(st[i] == 'T'){
            tcount++;
            tcounti = i;
        }else {
            acount++;
            acounti = i;
        }
    }
    if( tcount == acount ){
        if( tcounti < acounti) cout << "T" << endl;
        else if( tcounti > acounti ) cout << "A" << endl; 

    }
    else if( tcount > acount ) cout << "T" << endl;
    else if( tcount < acount) cout << "A" << endl;

    return 0;
}