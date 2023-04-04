#include<stdio.h>
int main(){

    int sum = 0 , num, i;
    printf("Enter the range you want to sum of number : ");
    scanf("%d",&num);

    for(i= 0 ; i <= num; i++){
        sum = sum + i;
    }
    printf("Total Sum is : %d ",sum);


    return 0;

}