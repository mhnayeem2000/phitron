#include<stdio.h>
#include<string.h>
int main(){

       char ch[1000001];
       int sum = 0 ;
       fgets(ch,1000001,stdin);

    for(int i = 0 ; ch[i] != '\0' ; i++){
        if((ch[i] >= '0') && (ch[i] <='9')){
            sum = sum + (ch[i] - 48);
        }
    }

    printf("%d",sum);


    return 0 ; 
}