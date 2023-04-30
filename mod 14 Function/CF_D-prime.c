#include<stdio.h>

void prime(){

    int n,arr[1000],count = 0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(int i=2; i<=n; i++){
        if(arr[i] % i == 0){
            count++;
        }
    }

    
}


int main(){
   
    prime();
    return 0;
}