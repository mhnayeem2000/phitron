#include<stdio.h>
int main(){ 

    int arr[100],i,size,l,r,temp;
    scanf("%d",&size);
    for(i = 0 ; i < size; i++){
        scanf("%d",&arr[i]);
    }


    printf("Brfore :");
     for( i = 0 ; i < size; i++){
        printf("%d ",arr[i]);
    }

   l = 0;
   r = size-1;
    while(l < r){
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
    printf("\nAfter  :");
    for( i = 0 ; i < size; i++){
        printf("%d ",arr[i]);
    }
    

    return 0 ; 
}