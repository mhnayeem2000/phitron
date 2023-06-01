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


bool cmp(student a, student b){
    if( a.total_marks > b.total_marks) return true;
    else if (a.total_marks == b.total_marks)
    {
        if(a.id < b.id) return true;
        else return false;
    }
    
    else return false;
}

int main(){
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        a[i].calculateTotalMarks();
    }
    //sort function 
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << " "  << endl;
    }
    return 0;
}