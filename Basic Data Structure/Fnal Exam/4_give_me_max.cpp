#include <iostream>
#include <queue>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;
};

class cmp {
    public:
    bool operator()(const Student& s1, const Student& s2) {
        if (s1.marks != s2.marks) {
            return s1.marks < s2.marks; 
        }
        return s1.roll > s2.roll; 
    }
};

int main() {
    int N;
    cin >> N;

    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < N; i++) {
        Student st;
        cin >> st.name >> st.roll >> st.marks;
        pq.push(st);
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int command;
        cin >> command;

        if (command == 0) {
            Student st;
            cin >> st.name >> st.roll >> st.marks;
            pq.push(st);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        } else if (command == 1) {
            if (!pq.empty()) {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            } else {
                cout << "Empty" << endl;
            }
        } else if (command == 2) {
            if (!pq.empty()) {
                pq.pop();
            }
            if (!pq.empty()) {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
