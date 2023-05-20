#include<stdio.h>
int main(){

    char c,next;
    scanf("%c",&c);
    if( c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
        next = c+1;
        if(c == 'z' ){
           next = 'a';
           
        }
        if( c == 'Z'){
            next = 'A';
        }
        printf
        ("%c",next); 
    }

    return 0;
}