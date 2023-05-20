#include<stdio.h>
int main(){ 
    int size, num1,num2,n1c = 0,n2c = 0;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d %d",&num1,&num2);
        if(num1>num2){
            n1c++;
        }
        else if (num2 > num1)
        {
            n2c++;
        }else if (num1 == num2)
        {
            n1c++;
            n2c++;
        }
        
        
    }
    if( n1c > n2c ){
        printf("Tiger");
    }
    else if (n1c < n2c )
    {
        printf("athan");
    }
    else if (n1c == n2c)
    {
        printf("Draw");
    }
    
    

    return 0;
}