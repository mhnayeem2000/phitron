#include<stdio.h>
int main(){
    int n; 
    printf("Enter A positive Value : ");
    scanf("%d",&n);

    if(n >= 0){
        if(n % 2 == 0){
            printf("Even Number.");
        }else
            printf("Odd Number.");
    }else{
        printf("Enter Positive Value.");
    }

    return 0 ; 
}