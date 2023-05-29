#include <bits/stdc++.h>
using namespace std;
void print(stringstream & ss){
    string woed;
    if(ss >> woed){
        cout << woed << endl;
        print(ss);
    }
}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    return 0;
}