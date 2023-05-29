#include <bits/stdc++.h>
using namespace std;
void print(stringstream & ss){
    string woed;
    if(ss >> woed){
       
        print(ss);
        cout << woed << endl;
    }
}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    return 0;
}