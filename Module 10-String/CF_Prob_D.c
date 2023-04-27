#include<stdio.h>
#include<string.h>
int main(){

    char a[15],b[15],c[15];
    scanf("%s %s",a,b);
    strcpy(c,a);

    
    printf("%d %d\n",strlen(a),strlen(b));
    printf("%s\n",strcat(c,b));
    
        
   char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n",a,b);


    return 0;
}