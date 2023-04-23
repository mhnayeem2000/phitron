#include <stdio.h>
int main()
{
  int i = 0, count = 0;
  char s[1000];
  scanf("%s",s);

  while (s[i] != '\0') {
      if(s[i] >= 'a' && s[i] <= 'z'){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] =='o' || s[i] == 'u'){
          count++;
        }   
      }   
    i++;
  }

  printf("%d", count);

  return 0;
}