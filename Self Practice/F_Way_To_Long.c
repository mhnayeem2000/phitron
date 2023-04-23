#include<stdio.h>
#include<string.h>

int main(){

    char str[102];
    int size;
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        scanf("%s", str);
        int csize = strlen(str);
        if(csize > 10){
            printf("%c%d%c\n",str[0],csize-2,str[csize -1]);
        }else
        {
            printf("%s\n",str);
        }
        
    }

    return 0 ; 
}