#include<stdio.h>
int main(){
    int price;
    printf("Enter your price : ");
    scanf("%d",&price);

    if(price >= 10000){
        printf("Gucci Bag \n");
        if(price > 20000 ){
            printf("Gucci Belt");
        }
    }
    else if (  price >= 5000 && price < 10000 )
    {
       printf("Levis Bag.");
    }
    
   
    else{
        printf("Something From New market");
    }

    return 0;
}