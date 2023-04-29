#include<stdio.h>
int main(){

    int n, arr[1000000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        if( arr[i] <= 10){
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}