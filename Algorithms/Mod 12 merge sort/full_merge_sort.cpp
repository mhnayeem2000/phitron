#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int m,int r){
    int leftsize = m-l+1;
    int rightsize = r-m;
    int L[leftsize],R[rightsize];
    int k = 0;
    for(int i = l ; i <= m ; i++){
        L[k] = arr[i];
        k++;
    }
    k = 0 ; 
    for( int j = m+1 ; j <= r ; j++){
        R[k] = arr[j];
        k++;
    }

    int i = 0 , j = 0 ;
    int curr = l;
    while( i < leftsize && j < rightsize ){
        if(L[i] <= R[j]){
            arr[curr] = L[i];
            i++;
        }else {
            arr[curr] = R[j];
            j++;
        }
        curr++;
    }

    while(i < leftsize){
        arr[curr] = L[i];
        i++;
        curr++;
    }
    while(j < rightsize){
        arr[curr] = R[j];
        j++;
        curr++;
    }

}
void merge_sort(int arr[],int l , int r){
    if( l < r){
        int mid = (l + r)/2;
        merge_sort(arr,l , mid);
        merge_sort(arr, mid+1, r);
        merge(arr,l,mid,r);
    }
}
int main(){
    int n ;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    merge_sort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}