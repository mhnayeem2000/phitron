#include<bits/stdc++.h>
using namespace std;
bool subset_sum(int n , int s,int arr[]){

    if( n == 0 ){
        if( s == 0 )return true;
        else return false;
    }

    if( arr[n-1] <= s){
        bool opt1 = subset_sum(n-1,s-arr[n-1],arr);
        bool opt2 = subset_sum(n-1,s,arr);
        return opt1 || opt2;    
    }else 
        return subset_sum(n-1,s,arr);


}

int main(){
    int n ;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ ){
        cin >> arr[i];
    }
    int s;
    cin >> s;
    if(subset_sum(n,s,arr)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}



/*
4
1 2 3 6
7
*/