#include<stdio.h>
int main(){
    int arr[1001],size,val,count = 0;
    scanf("%d",&size);
    for(int i = 0 ; i < size; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&val);
    for(int i = 0 ; i < size; i++){
        if(arr[i] == val){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}