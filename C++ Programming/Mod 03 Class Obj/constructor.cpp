#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    int roll;
    char section;
    char name[100];

    Student(int i,int r,char s,char* n){
        id = i;
        roll = r;
        section = s;
        strcpy(name,n);
    }
};
int main(){
    char name1[100] = "Nayeem";
    char name2[100] = "Fahim";
    Student nayeem(1,45,'B',name1);
    Student fahim(2,34,'B',name2);
    cout << nayeem.id << endl;
    cout << nayeem.roll << endl;
    cout << nayeem.section << endl;
    cout << nayeem.name << endl;
    cout << fahim.name << endl;
    cout << fahim.id << endl;
    cout << fahim.roll << endl;
    return 0;
}