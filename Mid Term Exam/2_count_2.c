#include<stdio.h>
#include<string.h>
int main(){
    char ch[1001],count=0;
    scanf("%s",ch);
    int i =0;
    while(ch[i] != '\0'){
        if(ch[i] >= 'a' && ch[i] <= 'z'){
            if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u'){
            count++;
        }
      }
       i++;
    }
    printf("%d",count);
    
    return 0;
}