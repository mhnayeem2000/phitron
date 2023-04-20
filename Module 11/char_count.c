#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    scanf("%s",ch);
    int count[26] ={0};
    for(int i = 0 ; i < strlen(ch);i++){
        count[ch[i] - 'a']++;
    }
    for(int i = 0 ; i < 26; i++){
        printf("%c - %d\n",i+'a',count[i]);
    }

    return 0 ;
}