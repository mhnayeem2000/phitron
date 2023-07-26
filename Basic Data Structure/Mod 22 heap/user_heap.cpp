#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int size;
    cin >> size;
    for( int i = 0; i < size; i++ ){
        int val;
        cin >> val;
        v.push_back( val );
        int cur_indx = v.size() - 1;
        while( cur_indx != 0 ){
            int par_indx = (cur_indx-1)/2;
            if( v[par_indx] < v[cur_indx]){
                swap( v[par_indx], v[cur_indx] );
            }else {
                break;
            }
            cur_indx = par_indx;
        }
    }
    for( auto val : v ){
        cout << val << " ";
    }
    return 0;
}