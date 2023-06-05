#include <bits/stdc++.h>
using namespace std;
int main(){
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
   v.push_back(6);
   v.resize(3);
   v.resize(8);
   cout << v.size() << endl;
   for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
   }
   cout << v[4] << endl;
   return 0;
 
}
//resize korle oi obdhi sob data dlt kore dey, but memory thake.