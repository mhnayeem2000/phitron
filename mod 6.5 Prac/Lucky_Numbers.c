#include<stdio.h>
int main(){
    int n,first,last;
    scanf("%d",&n);
    first = n /10;
    last = n % 10;
    
    if(first == 0 || last == 0){
         printf("YES");
    }
    else if(first % last == 0  || last % first == 0){
        printf("YES");
    }

    else
        printf("NO");
    
    

    return 0 ;
}