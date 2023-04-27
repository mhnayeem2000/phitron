#include<stdio.h>
#include<string.h>
int main(){

    char s[100];
    gets(s);
    int i = 0, count = 0;
    while(s[i] != '\0'){
        count++;
        i++;
    }

    printf("%d\n", count);


    return 0;
}