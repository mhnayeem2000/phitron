#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        pq.push(num);
    }

    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int command;
        cin >> command;

        if (command == 0) {
            int X;
            cin >> X;
            pq.push(X);
            cout << pq.top() << endl;
        } else if (command == 1) {
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << pq.top() << endl;
            }
        } else if (command == 2) {
            if (pq.empty()) {
                cout << "Empty" << endl;
            } else {
                pq.pop();
                if (pq.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << pq.top() << endl;
                }
            }
        }
    }

    return 0;
}
