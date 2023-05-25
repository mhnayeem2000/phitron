#include <bits/stdc++.h>
using namespace std;
class student {
    public:
    int id;
    int roll;
    student(int id, int roll){
        this->id = id;
        this->roll = roll;
    }
};

int main(){

    //student nayeem(1,3);
    student * nayeem = new student(1,3);
    cout << nayeem->id << endl;
    cout << nayeem->roll << endl;
    return 0;
}