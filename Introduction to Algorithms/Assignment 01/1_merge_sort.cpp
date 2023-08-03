#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int nums[N];
void marge(int l , int mid, int r){
    int left_size = (mid-l)+1;
    int L[left_size+1];
    int right_size =  r - mid;
    int R[right_size+1];

    for( int i =l, j = 0 ; i <= mid ; i++,j++){
        L[j] = nums[i];
    }

    for( int i = mid+1, j = 0; i <= r; i++ , j++){
        R[j] = nums[i];
    }

    L[left_size] = INT_MAX;
    R[right_size] = INT_MAX;

    int lp = 0 , rp = 0 ;
    for( int i = l ;   i <= r; i++){
        if( L[lp] <= R[rp]){
            nums[i] = L[lp];
            lp++;
        }
        else {
            nums[i] = R[rp];
            rp++;
        }
    }
}

void margesort(int l , int r){
    if(l == r) return;
    int mid = (l+r)/2;
    margesort(l,mid);
    margesort(mid+1,r);
    marge(l,mid,r);
}

int main(){

    int n;
    cin >> n;
    vector<int>v;
    for( int i=0; i<n; i++ ){
        cin >> nums[i];
    }
    
    margesort(0,n-1);
    for(int i = 0; i < n; i++){
        v.push_back(nums[i]);
    }
    for( int i = 0 ; i < n ; i++ ){
        cout << v[i] << " ";
    }
    return 0;
}