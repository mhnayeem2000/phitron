#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    if((a) + (b) + (c) == d){
        printf("YES1");
    }else if ((a) + (b) -(c) == d)
    {
        printf("YES2");
    }
    else if ((a) - (b) + (c) == d)
    {
        printf("YES3");
    }
    else if ((a) +(b) * (c) == d)
    {
        printf("YES4");
    }
    else if ((a) * (b) + (c) == d)
    {
        printf("YES5");
    }
    else if ((a) - (b) * (c) == d)
    {
        printf("YES6");
    }
    else if ((a) * (b) - (c) == d)
    {
        printf("YES7");
    }
    else{
        printf("NO");
    }
    


    return 0;
}