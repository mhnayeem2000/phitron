#include<stdio.h>
int main(){

    int n, arr[100000],val,count = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&val);
    for(int i=0;i<n;i++){
        if(val == arr[i]){
            printf("%d",i);
            count++;
            break;
        }
    }
    if(count == 0){
        printf("-1");
    }
    
    return 0 ; 
}