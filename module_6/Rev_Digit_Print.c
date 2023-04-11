#include<stdio.h>
int main(){
    int dig;
    scanf("%d",&dig);
    
    while (dig != 0){
       // 532
         printf("%d",dig%10);
         dig = dig/10;
        
    }
return 0 ; 
}