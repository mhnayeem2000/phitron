#include<stdio.h>
int main(){
    char ch[100];
    char ch1[100];
    gets(ch);
    printf("%s\n",ch);
    fgets(ch1,100,stdin);
    printf("%s",ch1);

    return 0 ; 
}