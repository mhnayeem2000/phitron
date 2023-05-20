#include<stdio.h>
#include<string.h>
int main(){

    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("The string is: %s\n",str);
    printf("The length of the string is: %d\n",strlen(str));

    return  0;
}