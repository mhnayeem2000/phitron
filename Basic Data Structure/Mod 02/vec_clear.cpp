#include <bits/stdc++.h>
using namespace std;
int main(){
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.clear();
   for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
   }
    cout <<  endl;
    cout << v.size() << endl;
   cout << v[1] << endl;// clear function memory delete kore na. just value gulo delete kore dey
    return 0 ;
}