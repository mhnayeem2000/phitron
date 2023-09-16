#include<bits/stdc++.h>
using namespace std;

bool subset_sum(int arr[], int n , int s){
    //base case
    if( n == 0){
        if( s == 0 ){
            return true;
        }
        else  return false;
    }
    if( arr[n-1] <= s){

        bool opt1 = subset_sum(arr,n-1,s-arr[n-1]);
        bool opt2 = subset_sum(arr,n-1 , s);
        return opt1 || opt2;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }
    int s;
    cin >> s;

    if(subset_sum(arr,n,s)){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
    return 0;
}