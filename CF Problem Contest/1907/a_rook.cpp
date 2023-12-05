#include <bits/stdc++.h>
using namespace std;
int main() {
    int row = 8;
    int col = 8;
    string pos;
    cin >> pos;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << pos << " ";
        }
        printf("\n");
    }
    return 0;
}
