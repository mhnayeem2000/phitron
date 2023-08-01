#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N;

    // Create a min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        minHeap.push(num);
    }

    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int command;
        cin >> command;

        if (command == 0) {
            int X;
            cin >> X;
            minHeap.push(X);
            cout << minHeap.top() << endl;
        } else if (command == 1) {
            if (minHeap.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << minHeap.top() << endl;
            }
        } else if (command == 2) {
            if (minHeap.empty()) {
                cout << "Empty" << endl;
            } else {
                minHeap.pop();
                if (minHeap.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << minHeap.top() << endl;
                }
            }
        }
    }

    return 0;
}
