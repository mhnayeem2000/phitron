#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    int roll;
    char section;

    Student(int i,int r,int s){
        id = i;
        roll = r;
        section = s;
    }
};
int main(){
    Student nayeem(1,45,'B');
    cout << nayeem.id << endl;
    cout << nayeem.roll << endl;
    cout << nayeem.section << endl;
    return 0;
}