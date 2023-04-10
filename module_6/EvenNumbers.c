#include<stdio.h>
int main(){
    int n,flag =0;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("%d\n",i);
            flag++;
        }
    }
    if(flag == 0){
        printf("-1");
    }
    

    return 0;
}