#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while(test--){
        int row = 8;
        int col = 8;

        string pos;
        cin >> pos;

        char column = pos[0];
        int rowLabel = pos[1] - '0';

        for (int i = 1; i <= row; ++i) {
            if (i != rowLabel) {
                cout << column << i << "\n";
            }
        }
        for (char c = 'a'; c <= 'h'; ++c) {
            if (c != column) {
                cout << c << rowLabel << "\n";
            }
        }

        cout << endl;
    }

    return 0;
}
