#include<stdio.h>

int palindrome(int x){
    int num = x, temp , r ,sum = 0;
    temp = num;
    while(temp!= 0){
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    if( num == sum ) 
        return 1;
    else{
        return -1;
    }
}

int odd(int x){
    int num = x;
    if(num % 2 == 0)
        return 1;
    else
        return -1;
}

int main(){
    int num,bin = 0 ,rem = 0, place = 1;
    scanf("%d", &num);
    int N = num;
     while (num){
        rem = num % 2;
        num = num / 2;
        bin = bin + (rem * place);
        place = place * 10;
     }
     

 
    /*
     printf("%d\n", bin);

    palindrome(bin);
    if( palindrome(bin) == -1 ){
        printf("Not palindrome\n");
    }else if (palindrome(bin) == 1)
    {
    printf("Palindrome\n");
    }
    
    printf("%d\n", odd(N));

    */
   
   



    if( (palindrome(bin) == 1)  && (odd(N) == -1)){
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    
    return 0;
}