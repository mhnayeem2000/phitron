#include<stdio.h>
int main(){
    int num1, num2,res;
    scanf("%d %d",&num1,&num2);
    if( num2 > num1){
        res = (num2 - num1);
    } else if (num1 > num2)
    {
        res = (num1 - num2);
    }

    if( res > 1){
        printf("NO");

    }
    else if (num1 == 0 && num2 == 0){
        {
            printf("NO");
        }
    }
    else{
        printf("YES");
    }

    return 0;
}