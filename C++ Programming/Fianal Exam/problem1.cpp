#include <bits/stdc++.h>
using namespace std;
int main() {
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        string S, X;
        cin >> S >> X;
        size_t  pos = S.find(X); 
        while (pos != string::npos) { 
            S.replace(pos, X.length(), "$"); 
            pos = S.find(X, pos + 1); 
        }
        cout << S << endl;
    }

    return 0;
}
