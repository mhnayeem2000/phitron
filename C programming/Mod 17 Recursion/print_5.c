#include<stdio.h>

void fun(int i){
    if(i == 6) return;
    
    printf("%d\n",i);
    fun(i+1);
    
}
int main(){
    int start;
    scanf("%d", &start);
    fun(start);
}