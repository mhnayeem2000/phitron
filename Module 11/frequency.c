#include<stdio.h>
int main(){
    int size,arr[100],count[100] ={0},range;
    scanf("%d",&size);
    scanf("%d",&range);
    for(int i = 0 ; i < size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i < size; i++){
        count[arr[i]]++;
    }
    for(int i = 0 ;  i <= range; i++){
        printf("%d - %d\n",i,count[i]);
    }
   


    return 0 ; 
}