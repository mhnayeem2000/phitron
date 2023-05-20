#include<stdio.h>

int main(){
    char name[10];
    for(int i = 0;  i < name.length; i++){
        scanf("%c",&name[i]);
    }

    for(int i = 0 ; i < name.length ; i++){
        printf("%c \n",name[i]);
    }
    return 0 ; 
}