#include<stdio.h>
int main(){
    int n,i,j,s,k=1;
    scanf("%d",&n);
    s= n-1;
    for(i=0;i<n;i++){
        for(j = s; j >=1; j-- ){
            printf(" "); 
        }
        for(j = 1; j <= k; j++){
            printf("*");
           }
        printf("\n");
        k=k+2;
        s--;
    }
    return 0;
}