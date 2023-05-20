#include<stdio.h>
#include<string.h>
int main(){

    char s[10001];
    int scount =  0, ccount = 0;
    scanf("%s",s);
    for(int i = 0; i < strlen(s);i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            scount++;
        }else if ( s[i] >= 'A' && s[i] <= 'Z' )
        {
            ccount++;
        }
        
    }
    printf("%d %d",ccount,scount);

    return 0;
}