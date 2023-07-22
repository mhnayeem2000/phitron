#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<string> q;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++) {
        int val;
        string name;
        cin >> val;
        if (val == 0) {
            cin >> name;
            q.push(name);
        } else if (val == 1) {
            if (!q.empty()) {
                string frontPerson = q.front();
                cout << frontPerson << endl;
                q.pop();
            } else {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}