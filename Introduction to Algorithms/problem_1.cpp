#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int nums[N];
void marge(int l , int mid, int r){
    int left_size = mid-l+1;
    int L[left_size+1];
    int right_size
     =  r - (mid+1) -1;
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
    for( int i=0; i<n; i++ ){
        cin >> nums[i];
    }
    
    sort(nums,nums+n);
    for( int i = 0 ; i < n ; i++ ){
        cout << nums[i] << " ";
    }
    return 0;
}