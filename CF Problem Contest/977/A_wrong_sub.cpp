#include <bits/stdc++.h>
using namespace std;
int main(){
    int num ;
    int k;
    cin >> num >> k;
    for(int i=0; i< k ; i++){
        if( num % 2 == 0  && num % 5 == 0){
            num /= 10;
        } else num --;
    }
    cout << num << endl;
    return 0;
}