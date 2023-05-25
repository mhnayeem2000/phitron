#include <bits/stdc++.h>
using namespace std;
class car{
    public:
    int seiral;
    int model;
    char section;
    char name[100];

    car(int i,int r,char s,char* n){
        seiral = i;
        model = r;
        section = s;
        strcpy(name,n);
    }
};

car fun(){
    char name[100] = "Toyta";
    car toyta(1,23,'A',name);
    return toyta;

}
int main(){
    car toyta = fun();
    cout << toyta.seiral << endl;
    cout << toyta.model << endl;
    cout << toyta.section << endl;
    cout << toyta.name << endl;
    return 0;
}

