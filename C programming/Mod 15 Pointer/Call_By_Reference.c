#include<stdio.h>
void fun(int *p){
    *p = 200;
    printf("%d\n", *p);
}

int main(){
    int x = 10;
    printf("x: %d\n", x);
    fun(&x);
    printf("x: %d\n", x);
    return 0;
}