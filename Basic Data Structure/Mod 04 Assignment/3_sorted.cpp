#include<bits/stdc++.h>
using namespace std;
int main(){
    int size; cin >> size;
    for( int i = 0; i < size; i++ ){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool flag = false;
        for(int i = 0; i <n-1; i++){
            if( arr[i] > arr[i+1] ){
                flag = true;
            }
        }

        if( flag == true ){
            cout << "NO" << endl;
        }else cout << "YES" << endl;
   }

    return 0;
}