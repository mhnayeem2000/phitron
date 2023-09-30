#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        int count = 0;
        string m ="codeforces";
        
        for(int i=0; i<s.length()+1; i++){
            if(s[i] != m[i]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}