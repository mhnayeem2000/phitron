#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int id;
    int cls;
};
int main(){
    student a[3];
    for(int i=0; i<3; i++){
        getline(cin,a[i].name);
        cin >> a[i].id >> a[i].cls;
        cin.ignore();
    }
    for(int i=0; i<2; i++){
        for(int j=i+1; j<3; j++){
            if( a[i].id > a[j].id ){
                swap(a[i] , a[j]);
            }
        }
    }
    for(int i=0; i<3; i++){
        cout << a[i].name << " " <<  a[i].id << " " << a[i].cls << endl;
    }
    return 0;
}