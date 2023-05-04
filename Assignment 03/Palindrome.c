#include<stdio.h>
#include<string.h>


int is_palindrome(char Name1[]){
    
    char Name2[30];
    int i=0,len=0,j=0;
    while(Name1[i] != '\0')
    {
        i++;
        len++;
    }
    for(j=0, i=len-1; i>=0; i--, j++)
    {
        Name2[j] = Name1[i];
    }
    Name2[j] = '\0';

    int d = strcmp(Name1,Name2);
    if(d ==0)
    {
        return 1;
    }
    else
    {  
        return 0;
    }
}


int main()
{
    char Name1[30];
    scanf("%s",Name1);
    is_palindrome(Name1);
    
    if(is_palindrome(Name1) == 1)
    {
        printf("Palindrome\n");
    }
    else if ( is_palindrome(Name1) == 0)
    {
        printf("Not Palindrome\n");
    }

    return 0;
}