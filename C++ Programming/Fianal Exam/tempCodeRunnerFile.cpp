#include <bits/stdc++.h>
using namespace std;

class student {
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
    void calculateTotalMarks() {
        total_marks = math_marks + eng_marks;
    }
};

int main() {
    int n;
    cin >> n;
    student a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        a[i].calculateTotalMarks();
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].total_marks < a[j].total_marks) {
                swap(a[i], a[j]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << " "  << endl;
    }

    return 0;
}
