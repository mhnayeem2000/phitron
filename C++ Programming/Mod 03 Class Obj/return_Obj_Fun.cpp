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

Student fun(){
    char name[100] = "Nayeem";
    Student nayeem(1,23,'A',name);
    return nayeem;

}
int main(){
    Student nayeem = fun();
    cout << nayeem.id << endl;
    cout << nayeem.roll << endl;
    cout << nayeem.section << endl;
    cout << nayeem.name << endl;
    return 0;
}
/*
char name[100] = "Nayeem";
    Student nayeem(1,45,'B',name);
    cout << nayeem.id << endl;
    cout << nayeem.roll << endl;
    cout << nayeem.section << endl;
    cout << nayeem.name << endl;

*/
