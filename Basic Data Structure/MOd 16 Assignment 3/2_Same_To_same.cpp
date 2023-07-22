#include <bits/stdc++.h>
using namespace std;
int main() {
    stack <int> st;
    queue<int> q;
    int sizes, sizeq;
    cin >> sizes >> sizeq;
    for (int i = 0; i < sizes; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < sizeq; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    bool equal = true;

    if (st.size() != q.size()) {
        equal = false;
    } else {
        while (!st.empty() && !q.empty()) {
            if (st.top() != q.front()) {
                equal = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    if (equal) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

