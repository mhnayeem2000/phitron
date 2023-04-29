#include<stdio.h>
int main(){

    int n;
    printf("Enter a  value : ");
    scanf("%d",&n);

    if(n == 0 ){
        printf("Zero");
    }
    else if (n > 0)
    {
        printf("Positive.");
    }
    else if( n < 0){
        printf("Negative.");
    }
    else
    printf("Enter a valied number . ");
    
    return 0 ;
}