#include<stdio.h>
void fun(int x){
    int n = x;
    for(int i = 1; i <= n; i++){
        if(i == n){
            printf("%d", i);
        }else{
            printf("%d ", i);
        }
    }
}

int main(){
 
    int num1;
    scanf("%d",&num1);
    fun(num1);
    return 0;
}