#include <bits/stdc++.h>
using namespace std;
int main(){
   vector<int> v = {1,2,3,4,5};
   //v.erase(v.begin()+2);
   //v.erase(v.begin()+2,v.end());
   v.erase(v.begin()+2,v.begin()+4);
   for(int x : v){
        cout << x << " ";
   }
}