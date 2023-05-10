#include<stdio.h>
int main(){
    int x,p;
    double before,mid,final;
    scanf("%d %d",&x,&p);
    before = 100-x;
    mid = 100/before;
    final = p*mid;
    printf("%.2f",final);
    return 0;
}
