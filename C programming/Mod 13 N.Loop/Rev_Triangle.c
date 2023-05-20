#include<stdio.h>
int main(){
    int n,i,j,s,k;
    scanf("%d",&n);
    s=0;
    k=2*n-1 ;
    for(i=0;i<n;i++){
        for(j = 1; j <=s; j++ ){
            printf(" "); 
        }
        for(j = k; j >= 1; j--){
            printf("*");
           }
        printf("\n");
        k=k-2;
        s++;
    }
    return 0;
}