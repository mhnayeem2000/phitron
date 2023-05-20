#include<stdio.h>
int main(){
    int n,i,j,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1 ;
    for(i=0;i<n;i++){
        for(j = 1; j <=s; j++ ){
            printf(" "); 
        }
        for(j = 1; j <= k; j++){
            if(i % 2 != 0){
                printf("*");
            }else if(i % 2 == 0){
                printf("^");
            }
                
        }
        printf("\n");
        k=k+2;
        s--;
    }
    return 0;
}