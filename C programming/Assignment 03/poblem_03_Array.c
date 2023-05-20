#include<stdio.h>

void count_before_zero(){
    int n , arr[10000],count = 0;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
        if(arr[i] == 0){
           break;
        }
         count++;
    }
    printf("%d",count);
}


int main(){
    count_before_zero();
    return 0;
}