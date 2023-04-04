#include<stdio.h>
int main(){

    int n,i;
    printf("Enter Range : ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
       if( i % 2 == 0){
         printf("%d  - Even. \n",i);
       }else
        printf("%d  - ODD. \n",i);
    }
    

    return 0;

}