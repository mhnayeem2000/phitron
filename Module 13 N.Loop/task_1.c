#include<stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    k = n;
    for(i=0;i<n;i++){
        for(j = k;j >= 1; j--){
            printf("* ");
        }
        printf("\n");
        k--;
    }

    return 0;
}