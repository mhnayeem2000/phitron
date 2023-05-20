#include<stdio.h>

void swap(){
    int a, b;
    scanf("%d %d", &a, &b);
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}


int main(){
    swap();
    return 0;
}