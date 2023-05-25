#include <bits/stdc++.h>
using namespace std;
class Person{
    public:
    char name[100];
    float height;
    int age;

    Person(char* n,float h, int a){
        strcpy(name,n);
        height = h;
        age = a;
    }
};
int main(){
    char name1[100] = "Nayeem";
    Person * nayeem = new Person(name1, 100.1,23);
    cout << nayeem->name << endl;
    cout << nayeem->height << endl;
    cout << nayeem->age << endl;
    
    return 0;
}