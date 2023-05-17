#include<stdio.h>
int main(){

    int a,b,mul;
    scanf("%d %d",&a,&b);

    if( a < b){
        mul = (a-b)*(-1);
    }else{
        mul = (a-b);
    }

    if( (a == 0 & b == 0)  || mul >= 2)
        printf("NO");
    else printf("YES");    

    return 0;
}