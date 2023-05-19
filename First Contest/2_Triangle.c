#include <stdio.h>
int main()
{
    
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if (a == 0 || b ==  0 || c == 0)
    {
        printf("NO");
    }
    else if(a ==  b  && b == c && c == a){
        printf("YES");
    }else
    {
        printf("NO");
    }
    
    
   
    
   return 0;
}