#include <bits/stdc++.h>
using namespace std;
class student {
    public:
        string name;
        int id;
        int marks;
};


bool cmp(student a, student b){
    if( a.id > b.id) return true;
    else return false;
}

int main(){
    student a[3];
    for(int i = 0; i < 3; i++){
        getline(cin,a[i].name);
        cin >> a[i].id >> a[i].marks;
        cin.ignore();
    }
    //sort function 
    sort(a,a+3,cmp);
    for(int i = 0; i < 3; i++){
        cout << a[i].name << " " <<  a[i].marks << " " <<  a[i].id << endl;
    }
    return 0;
}