#include <bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v,int x){
    v.push_back( x );
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
void print_heap(vector<int> &v){
    for(int val: v){
        cout << val << " ";
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for( int i = 0; i < n; i++ ){
        int x ;
        cin >> x;
        insert_heap(v,x);
    }
    print_heap(v);
    return 0;
}