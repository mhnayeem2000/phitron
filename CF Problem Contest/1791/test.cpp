#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        string st = "codeforces";    
        char s;
        cin >> s;
        bool flg = false;
        for (int i = 0; i < st.length(); i++) {    
            if (st[i] == s) {
                flg = true;
                break;
            }
        }

        if (flg) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
