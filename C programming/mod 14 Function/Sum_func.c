#include<stdio.h>
int sum(int x, int y){
    return x+y;
}

int main(){
 
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d\n",sum(num1,num2));
    
    return 0;
}