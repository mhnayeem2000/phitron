#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={50,40,45,30,35,42,32,25,20,10};
    int x; cin >> x;
    v.push_back(x);
    int curr_inx = v.size()-1;
    while(curr_inx != 0){
        int par_inx = (curr_inx -1)/2;
        if(v[par_inx] < v[curr_inx])
            swap(v[par_inx], v[curr_inx]);
        else
            break;
        curr_inx = par_inx;       
    }
    for(  auto val : v ){
        cout << val << " ";
    }
    return 0;
}