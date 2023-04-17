#include<stdio.h>
#include<string.h>
int main(){

    char s[100000],t[1000000];
    gets(s);
    gets(t);
    printf("%d ",strlen(s));
    printf("%d",strlen(t));
    printf("\n%s %s",s,t);
    return 0 ; 
}