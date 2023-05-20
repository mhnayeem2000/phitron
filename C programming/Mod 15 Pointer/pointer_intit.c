#include<stdio.h>
int main(){
    // initialize variable
    int x = 10;
    // initialize pointer for variable x
    int * ptr = &x;
    // print value of variable x
    printf("%d\n",x);
    // print address of variable x
    printf("%d\n",ptr);
    // print value of variable x
    printf("%d\n",*ptr);
    // print address of variable x
    printf("%d\n",&x);

    int * ptr2 = &x;
    *ptr2 = 100;
    printf("%d\n",x);
}