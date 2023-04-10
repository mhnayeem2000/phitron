#include<stdio.h>
int main(){

    int n,arr[100000],max;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
        
    }
    max = arr[0];

    for(int i = 0 ;  i  < n ; i++){
        
        if(max < arr[i]){
            max = arr[i];
        }
    }

    printf("%d",max);
    

    return 0 ;
}