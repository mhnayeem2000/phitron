#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    int frq[26] ={0};
    for(int i=0; i<size;i++){
        char a;
        cin >> a;
        frq[a-'a']++;
    }
    for(char i = 'a' ; i < 'z';i++){
        if(frq[i-'a'] > 0){
            for(int j = 0; j < frq[i-'a']; j++){
                cout << i;
            }
        }
    }
    return 0;
}