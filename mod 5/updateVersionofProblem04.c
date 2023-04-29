// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int n,count=0,mul = 10;
    
    scanf("%d",&n);
    int n1 = n;
    while( n1!= 0){
        n1 =  n1 / 10 ;  
        count ++;
    }
    for(int i = 1; i < count-1 ; i++ ){
        mul = mul * 10;
    }
    
    int first = n / mul;
    if( first % 2 == 0 ){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
  
    return 0;
}