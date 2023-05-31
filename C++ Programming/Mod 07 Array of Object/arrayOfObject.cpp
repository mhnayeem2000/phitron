#include <bits/stdc++.h>
using namespace std;
class student {
    public:
        string name;
        int id;
        int marks;
};
int main(){
    student a[3];
    for(int i = 0; i < 3; i++){
        getline(cin,a[i].name);
        cin >> a[i].id >> a[i].marks;
        cin.ignore();
    }
    for(int i = 0; i < 3; i++){
        cout << a[i].name << " " <<  a[i].marks << " " <<  a[i].id << endl;
    }
    return 0;
}