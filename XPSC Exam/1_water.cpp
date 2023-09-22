#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int num;
        cin >> num;
        int arr[num];
        for(int i = 0; i < num;i++){
            cin >> arr[i];
        }

        int max = arr[0];
        for(int i = 1; i < num; i++){
            if(arr[i] > max){
                max = arr[i];
            }
            
        }
    }

   
    return 0;
}