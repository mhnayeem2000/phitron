#include<stdio.h>
int main(){
    int n,result; 
    printf("Enter A positive Value : ");
    result = scanf("%d",&n);

   if(result == 1){
     if(n >= 0){
        if(n % 2 == 0){
            printf("Even Number.");
        }else
            printf("Odd Number.");
    }else{
        printf("Enter Positive Value.");
    }
   }
   else{
    printf("Envalied Input.");
   }

    return 0 ; 
}