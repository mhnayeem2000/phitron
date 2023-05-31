#include <bits/stdc++.h>
using namespace std;
class student{
    public:
        string name;
        int id;
        int age;
};
int main(){
    student st[3];
    for(int i = 0 ; i <  3; i++){
        getline(cin, st[i].name);
        cin >> st[i].id >> st[i].age;
        cin.ignore();

    }
 
     for(int i = 0 ; i < 2; i++){
        for(int j = i+1; j < 3; j++){
            if(st[i].age > st[j].age ){
                swap(st[i], st[j]);
            }
        }
    }
   
   
    for(int i = 0 ; i < 3; i++){
        cout << st[i].name << " " << st[i].age << " " << st[i].id << endl;
    }
    return 0;
}