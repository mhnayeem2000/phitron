#include<stdio.h>
void sum(int i){
    if(i == 6) return ;
    sum(i +1);
    printf("%d\n",i);
    
}
int main(){ 
    sum(1);
}