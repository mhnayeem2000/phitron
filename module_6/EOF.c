#include<stdio.h>
int main(){

   int num;
    while(scanf("%d",&num) !=EOF){
        if(num  == 1999){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
    return 0 ;
}