#include<stdio.h>
int main(){
    char ch[100];
    char ch1[100];
    gets(ch);
    printf("%s\n",ch);
    fgets(ch1,100,stdin);
    printf("%s",ch1);

    int sz = sizeof(ch1) / sizeof(char);
    printf("%d",sz);

    return 0 ; 
}