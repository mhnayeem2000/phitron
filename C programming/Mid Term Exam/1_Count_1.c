#include<stdio.h>
int main(){
    int size,arr[1000001],ecount=0,ocount=0;
    scanf("%d",&size);
    for(int i = 0 ; i < size; i++){
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0){
            ecount++;
        }else{
            ocount++;
        }
    }

    printf("%d %d",ecount,ocount);

    return 0 ; 
}