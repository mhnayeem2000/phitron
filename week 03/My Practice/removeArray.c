#include<stdio.h>
int main(){ 
    int size, arr[100],i,pos;
    scanf("%d",&size);
    for(i  = 0 ; i < size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter position : ");
    scanf("%d",&pos);

    for(i = pos; i < size; i++){
        arr[i] = arr[i+1];
    }

    for(i  = 0 ; i < size-1; i++){
        printf("%d ",arr[i]);
    }

    return 0 ; 
}