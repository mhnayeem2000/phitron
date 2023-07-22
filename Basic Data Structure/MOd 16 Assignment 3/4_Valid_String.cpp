#include <bits/stdc++.h>
using namespace std;

bool valiedst(string &s) {
    stack<char> st;

    for (char c : s) {
        if (c == 'A') {
            if (!st.empty() && st.top() == 'B') {
                st.pop();
            } else {
                st.push(c);
            }
        } else if (c == 'B') {
            if (!st.empty() && st.top() == 'A') {
                st.pop();
            } else {
                st.push(c);
            }
        }
    }

    return st.empty();
}

int main() {
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        string st;
        cin >> st;
        bool result = valiedst(st);
        cout << (result ? "YES" : "NO") << endl;
    }

    return 0;
}
