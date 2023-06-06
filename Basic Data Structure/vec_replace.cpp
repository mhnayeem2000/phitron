#include <bits/stdc++.h>
using namespace std;
int main(){
   vector<int> v={1,2,3,4,5,6,7,8};
  // replace(v.begin(),v.end(),2,0);
   replace(v.begin(),v.end(),2,1);
   replace(v.begin(),v.end(),5,2);
   for(int x: v){
        cout << x << " ";
   }  
}