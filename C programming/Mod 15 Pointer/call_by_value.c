#include<stdio.h>

void fun(int a){
    int x = a;
    x = 100;
    printf("%d\n",x);
}
int main(){
    int x = 10;
    printf("%d\n",x);
    fun(x);
    return 0;
}