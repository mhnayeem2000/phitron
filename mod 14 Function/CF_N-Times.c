#include<stdio.h>

void ntime(){
    int n,times;
    scanf("%d",&n);
    char ch[1000];
    for(int i=0; i<n; i++){
        scanf("%d %s",&times ,ch);
    }
     for(int i=0; i<n; i++){
        for(int i=0; i<times; i++){
            printf("%s ",ch);
        }
    }
    
    
}

int main(){
    ntime();
    return 0;
}