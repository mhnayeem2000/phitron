#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string st;
    cin >> st;
    int ocount= 0,mcount = 0,xcount = 0;
    for(int i = 0; i <st.length(); i++){
        if(st[i] == 'o'){
            ocount++;
        }
        if(st[i] == '-'){
            mcount++;
        }
        if(st[i] == 'x'){
            xcount++;
        }
    }
    if(( ocount > 0 || mcount >= 0) && xcount == 0){
        cout << "Yes" << endl;
    }else cout << "No" << endl;

    return 0;
}