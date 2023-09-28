#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count = 0;
    string m[10] ="codeforces";
    /*
    
    
    for(int i=0; i<s.length()+1; i++){
        if(s[i] != m[i]){
            count++;
        }
    }
    */
    for(int i=0; i<10; i++){
        cout << m << endl;
    }
    cout << count << endl;
    cout << m[1] << endl;
    return 0;
}