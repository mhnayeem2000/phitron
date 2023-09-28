#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    bool flag = false;
    for(int i=0; i<3; i++){
        if(num[i] > num[i+1]){
            flag = true;
        }
        else flag = false;
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}