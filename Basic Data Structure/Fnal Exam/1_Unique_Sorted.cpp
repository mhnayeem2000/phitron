#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int val;
            cin >> val;
            st.insert(val);
        }

        vector<int> vec;
        for (auto it = st.begin(); it != st.end(); it++) {
            vec.push_back(*it);
        }

        for (int k = vec.size() - 1; k >= 0; k--) {
            cout << vec[k] << " ";
        }

        cout << endl;
        st.clear();
    }

    return 0;
}
