#include<bits/stdc++.h>
using namespace std;
int binaryS(int arr[], int num,int val){
    int l = 0; 
    int r = num - 1;
    while( l <=  r){
        int mid = (l+r)/2;
        if(arr[mid] == val){
            return mid;
        }else if( arr[mid] < val){
            l = mid + 1;
        }
        else r =  mid - 1;
    }
    return -1;
}

int main(){
    int num;
    cin >> num;
    int arr[num];
    for( int i = 0; i < num; i++){
        cin >> arr[i];
    }
    int val;
    cin >> val;

    int res = binaryS(arr,num,val);
    if( res != -1){
        cout << res << endl;
    }else cout << "Not Found" << endl;
    return 0;
}



