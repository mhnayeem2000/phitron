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
    char name2[100] = "Fahim";
    Person * nayeem = new Person(name1, 100.1,13);
    Person * fahim = new Person(name2, 56.4,23);
    
    int age1 = nayeem->age;
    int age2 = fahim->age;
    if( age1 > age2 ){
        cout << nayeem->name <<" : " <<  age1 <<  endl;
    }else if (age1 < age2)
    {
         cout << fahim->name <<" : " <<  age1 <<  endl;
    }else cout << "Both are Equeal" << endl;
    
    
    return 0;
}