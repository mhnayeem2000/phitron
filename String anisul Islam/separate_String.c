#include<stdio.h>
#include <string.h>

int main(){

    char s[100];
    gets(s);
    for(int i = 0; i < s[i] !='\0'; i++){
        printf("%c + %c \n", s[0] ,s[strlen(s)-2]);
        break;

    }

    return 0;
}