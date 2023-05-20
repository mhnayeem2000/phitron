#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    int ccount  = 0;
    int  scount  = 0;
    int space = 0;
    fgets(s, 1001,stdin);
    for(int i=0;i<strlen(s);i++){

        if(s[i] >= 'A' && s[i]<= 'Z'){
            ccount++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            scount++;
        }
        else if (s[i] == ' ')
        {
            space++;
        }
    }
        printf("Capital - %d\n", ccount);
        printf("Small - %d\n", scount);
        printf("Spaces - %d\n", space);
    return 0;
}
