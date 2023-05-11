#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    for(int i=0; i<size; i++){
        int sum, num1, num2,num3;
        scanf("%d %d %d %d",&sum,&num1,&num2,&num3);
        int fsum = num1+num2+num3;
        int final = sum - fsum;
        printf("%d\n", final);
    }
   
    return 0;
}