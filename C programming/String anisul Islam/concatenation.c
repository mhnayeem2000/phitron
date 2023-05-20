#include<stdio.h>
#include<string.h>

int main()
{
    char str[100] ="Mehedi Hassan ";
    char str2[100] ="Nayeem";
    
    int len = strlen(str);
    
    for(int i  = 0 ; i < str2[i] != '\0' ; i++){
        str[len + i] = str2[i];
    }
    printf("%s\n",str);
    printf("%d",strlen(str));



    return 0;
}