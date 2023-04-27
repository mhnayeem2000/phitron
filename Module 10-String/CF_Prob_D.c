#include<stdio.h>
#include<string.h>
int main(){

    char a[15],b[15];
    char c[15],d[15];
    c[15] == a[15];
    d[15] == b[15];
    char temp[15];

    scanf("%s %s",a,b);
    
   char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%d %d\n",strlen(a),strlen(b));
    printf("%s\n",strcat(a,b));
    
    printf("%s %s\n",a,b);


    return 0;
}