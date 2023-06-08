#include <bits/stdc++.h>
using namespace std;
int main(){
  int n1,n2,val;  
  cin >> n1;
  vector<int> v1(n1);
  for(int i=0;i<n1;i++){
    cin >> v1[i];
  }
  cin >> n2;
  vector<int> v2(n2);
  for(int i=0;i<n2;i++){
    cin >> v2[i];
  }
  cin >> val;
    v1.insert(v1.begin()+val,v2.begin(),v2.end());
    for(int x:v1){
        cout << x << " ";
    }
    return 0;
}