#include <bits/stdc++.h>
using namespace std;

string mergeColors(char a, char b) {
    if (a == b) {
        return ""; // Vanishing colors result in an empty string
    } else if ((a == 'R' && b == 'G') || (a == 'G' && b == 'R')) {
        return "Y";
    } else if ((a == 'R' && b == 'B') || (a == 'B' && b == 'R')) {
        return "P";
    } else if ((a == 'B' && b == 'G') || (a == 'G' && b == 'B')) {
        return "C";
    }
    return ""; // Invalid combination
}

string solveColors(string &s) {
    stack<char> st;

    for (char c : s) {
        if (!st.empty()) {
            string merged = mergeColors(st.top(), c);
            if (!merged.empty()) {
                st.pop();
                if (!st.empty()) {
                    string updated = mergeColors(st.top(), merged[0]);
                    if (!updated.empty()) {
                        st.pop();
                        st.push(updated[0]);
                    } else {
                        st.push(merged[0]);
                    }
                } else {
                    st.push(merged[0]);
                }
            } else {
                st.push(c);
            }
        } else {
            st.push(c);
        }
    }

    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }

    // Remove adjacent duplicates
    string finalResult = "";
    char prevChar = '\0';
    for (char c : result) {
        if (c != prevChar) {
            finalResult += c;
            prevChar = c;
        }
    }

    return finalResult;
}

int main() {
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        int ssize;
        string st;
        cin >> ssize >> st;
        string result = solveColors(st);
        cout << result << endl;
    }

    return 0;
}
