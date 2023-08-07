#include<bits/stdc++.h>
using namespace std;

void res(int arr1[], int arr2[],int n,int m, int res[]){
    int x = 0 , y  = 0 , k = 0 ; 
    while(x < n && y < m){
        if(arr1[x] > arr2[y]){
            res[k++] = arr1[x++];
        }
        else {
            res[k++] = arr2[y++];
        }
    }
    while(x<n){
        res[k++] = arr1[x++];
    }
    while( y < m){
        res[k++] = arr2[y++];
    }
}

int main(){
    int n;
    cin >> n;
    int arr1[n];
    for( int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for( int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    int result[n+m];
    res(arr1,arr2,n,m,result);

    for( int i = 0 ; i < n+m; i++){
        cout << result[i] << " ";
    }
    return 0;
}