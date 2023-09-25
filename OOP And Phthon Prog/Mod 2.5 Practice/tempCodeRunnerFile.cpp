#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    while(test--){
        int num;
        cin >> num;
        for( int i = 0; i < num; i++ ){
            while(num > 0){
                int mod = num % 10;
                num /= 10;
                cout << mod << " ";
            }
    }
    }
    return 0;
}