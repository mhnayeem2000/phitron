#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={1,2,7,8,9};
    vector<int> v2 ={3,4,5,6};
    v.insert(v.begin() +2,v2.begin(),v2.end());
    for(int x:v){
        cout << x << " ";
    }
}